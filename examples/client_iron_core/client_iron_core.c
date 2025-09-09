#include "iec61850_client.h"

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <time.h>

#include "hal_thread.h"


#ifdef _WIN32
#include <Windows.h>
#else
#include <libgen.h>
#endif
static int running = 0;

void sigint_handler(int signalId)
{
    running = 0;
}

//---------------------------------------------文件读取功能部分------------------------------
static char* filename = "IEDSERVER.BIN";
static bool singleRequest = false;
void showDirectory(IedConnection con)
{
    IedClientError error;

    bool moreFollows = false;

    LinkedList rootDirectory;

    if (singleRequest)
        rootDirectory = IedConnection_getFileDirectoryEx(con, &error, filename, NULL, &moreFollows);
    else
        rootDirectory = IedConnection_getFileDirectory(con, &error, filename);

    if (error != IED_ERROR_OK) {
        printf("获取文件目录失败\n");
    }
    else {
        LinkedList directoryEntry = LinkedList_getNext(rootDirectory);

        while (directoryEntry != NULL) {

            FileDirectoryEntry entry = (FileDirectoryEntry) directoryEntry->data;

            printf("%s %i\n", FileDirectoryEntry_getFileName(entry), FileDirectoryEntry_getFileSize(entry));

            directoryEntry = LinkedList_getNext(directoryEntry);
        }

        LinkedList_destroyDeep(rootDirectory, (LinkedListValueDeleteFunction) FileDirectoryEntry_destroy);
    }

    if (moreFollows)
        printf("\n- MORE FILES AVAILABLE -\n");
}
static bool downloadHandler(void* parameter, uint8_t* buffer, uint32_t bytesRead)
{
    FILE* fp = (FILE*) parameter;

    printf("获取 %i 字节\n", bytesRead);
    if (bytesRead > 0) {
        if (fwrite(buffer, bytesRead, 1, fp) != 1) {
            printf("写文件失败!\n");
            return false;
        }
    }

    return true;
}
void getFile(IedConnection con)
{
    IedClientError error;

    char* bname = strdup(filename);

    char* localFilename = basename(bname);

    FILE* fp = fopen(localFilename, "wb");

    if (fp != NULL) {

        IedConnection_getFile(con, &error, filename, downloadHandler, (void*) fp);

        if (error != IED_ERROR_OK)
            printf("获取文件失败!\n");
        fclose(fp);
    }
    else
        printf("不能打开文件 %s\n", localFilename);

    free(bname);
}

void setFile(IedConnection con)
{
    IedClientError error;

    char* dirc = strdup(filename);
    char* basec = strdup(filename);

    char* localDirName = dirname(dirc);
    char* localFileName = basename(basec);

    printf("local dir: %s\n", localDirName);
    printf("local file: %s\n", localFileName);

    strcpy(dirc, localDirName);
    strcat(dirc, "/");

    printf("filestore basepath: %s\n", dirc);

    IedConnection_setFilestoreBasepath(con, dirc);

    IedConnection_setFile(con, &error, localFileName, localFileName);

    if (error != IED_ERROR_OK)
        printf("Failed to set file! (code=%i)\n", error);

    free(dirc);
    free(basec);
}

void deleteFile(IedConnection con)
{
    IedClientError error;

    IedConnection_deleteFile(con, &error, filename);

    if (error != IED_ERROR_OK)
        printf("Failed to delete file! (code=%i)\n", error);
}


static void fileInfo(IedConnection con)
{
    if (filename == NULL || *filename == '\0') {   
        printf("usage: file-tool info <filename>\n");
        return;
    }
    IedClientError error;

    LinkedList list = IedConnection_getFileDirectory(con, &error, NULL);

    if (error != IED_ERROR_OK || list == NULL) {
        printf("Error retrieving file directory\n");
        return;
    }

    bool found = false;
    for (LinkedList it = LinkedList_getNext(list); it; it = LinkedList_getNext(it)) {
        FileDirectoryEntry e = (FileDirectoryEntry) it->data;
        const char* name = FileDirectoryEntry_getFileName(e);
        if (name && strcmp(name, filename) == 0) {
            printf("info %s: size=%d\n", name, (int)FileDirectoryEntry_getFileSize(e));
            found = true;
            break;
        }
    }

    if (!found)
        printf("File not found in directory: .\n");

    LinkedList_destroyDeep(list, (LinkedListValueDeleteFunction) FileDirectoryEntry_destroy);
}
//---------------------------------------------读取功能列表部分------------------------------
void printSpaces(int spaces)
{
    int i;

    for (i = 0; i < spaces; i++)
        printf(" ");
}

void printDataDirectory(char* doRef, IedConnection con, int spaces)
{
    IedClientError error;

    LinkedList dataAttributes = IedConnection_getDataDirectory(con, &error, doRef);


    if (dataAttributes != NULL) {
        LinkedList dataAttribute = LinkedList_getNext(dataAttributes);

        while (dataAttribute != NULL) {
            char* daName = (char*) dataAttribute->data;

            printSpaces(spaces);
            printf("DA: %s\n", (char*) dataAttribute->data);

            dataAttribute = LinkedList_getNext(dataAttribute);

            char daRef[130];
            sprintf(daRef, "%s.%s", doRef, daName);
            printDataDirectory(daRef, con, spaces + 2);
        }
    }

    LinkedList_destroy(dataAttributes);
}
//---------------------------------------------报告部分--------------------------------------
void reportCallbackFunction(void* parameter, ClientReport report)
{
    LinkedList dataSetDirectory = (LinkedList) parameter;

    MmsValue* dataSetValues = ClientReport_getDataSetValues(report);

    printf("收到报告 %s 及其 rptId %s\n", ClientReport_getRcbReference(report), ClientReport_getRptId(report));

    if (ClientReport_hasTimestamp(report)) {
        time_t unixTime = ClientReport_getTimestamp(report) / 1000;

#ifdef WIN32
		char* timeBuf = ctime(&unixTime);
#else
		char timeBuf[30];
		ctime_r(&unixTime, timeBuf);
#endif

        printf("  报告时间戳 (%u): %s", (unsigned int) unixTime, timeBuf);
    }    

    if (dataSetDirectory) {
        int i;
        for (i = 0; i < LinkedList_size(dataSetDirectory); i++) {
            ReasonForInclusion reason = ClientReport_getReasonForInclusion(report, i);

            if (reason != IEC61850_REASON_NOT_INCLUDED) {

                char valBuffer[500];
                sprintf(valBuffer, "no value");

                if (dataSetValues) {
                    MmsValue* value = MmsValue_getElement(dataSetValues, i);

                    if (value) {
                        MmsValue_printToBuffer(value, valBuffer, 500);
                    }
                }

                LinkedList entry = LinkedList_get(dataSetDirectory, i);

                char* entryName = (char*) entry->data;

                printf("  %s (报告原因 %i): %s\n", entryName, reason, valBuffer);
            }
        }
    }

}

int main(int argc, char** argv)
{

    const char* hostname = "0.0.0.0";
    int tcpPort = 102;

    /* 命令行改为功能选择：
       ds  → 只做数据集目录与读取
       rpt → 只做报告订阅（含 GI 触发）
       file  → 读取文件 与读取文件属性
       未提供或其它指令 → 打印用法 */
    const char* cmd = (argc > 1) ? argv[1] : NULL;

    if (cmd == NULL) {
        printf("用法: %s <ds|rpt|file>\n", argv[0]);
        return 1;
    }

    running = 1;

    signal(SIGINT, sigint_handler);

    IedClientError error;

    IedConnection con = IedConnection_create();

    IedConnection_connect(con, &error, hostname, tcpPort);

    if (error == IED_ERROR_OK) {

        ClientReportControlBlock rcb = NULL;
        ClientDataSet clientDataSet = NULL;
        LinkedList dataSetDirectory = NULL;

        if (strcmp(cmd, "ds") == 0) {

            //读取功能树
            printf("获取逻辑设备...\n");
            LinkedList deviceList = IedConnection_getLogicalDeviceList(con, &error);

            if (error != IED_ERROR_OK) {
                printf("获取逻辑设备失败 (错误码: %i)\n", error);
                goto exit_error;
            }

            LinkedList device = LinkedList_getNext(deviceList);

            while (device != NULL) {
                printf("LD: %s\n", (char*) device->data);

                LinkedList logicalNodes = IedConnection_getLogicalDeviceDirectory(con, &error,
                        (char*) device->data);

                LinkedList logicalNode = LinkedList_getNext(logicalNodes);

                while (logicalNode != NULL) {
                    printf("  LN: %s\n", (char*) logicalNode->data);

                    char lnRef[129];
                    snprintf(lnRef, sizeof(lnRef), "%s/%s",
                             (char*) device->data, (char*) logicalNode->data);

                    /* 数据对象目录 */
                    LinkedList dataObjects = IedConnection_getLogicalNodeDirectory(con, &error,
                            lnRef, ACSI_CLASS_DATA_OBJECT);

                    LinkedList dataObject = LinkedList_getNext(dataObjects);

                    while (dataObject != NULL) {
                        char* dataObjectName = (char*) dataObject->data;
                        printf("    DO: %s\n", dataObjectName);
                        dataObject = LinkedList_getNext(dataObject);
                    }

                    LinkedList_destroy(dataObjects);

                    /* 数据集列表与成员 */
                    LinkedList dataSets = IedConnection_getLogicalNodeDirectory(con, &error, lnRef,
                            ACSI_CLASS_DATA_SET);

                    LinkedList dataSet = LinkedList_getNext(dataSets);

                    while (dataSet != NULL) {
                        char* dataSetName = (char*) dataSet->data;
                        char dataSetRef[130];
                        snprintf(dataSetRef, sizeof(dataSetRef), "%s.%s", lnRef, dataSetName);

                        bool isDeletable = false;
                        LinkedList dataSetMembers = IedConnection_getDataSetDirectory(con, &error, dataSetRef,
                                &isDeletable);

                        if (isDeletable)
                            printf("    Data set: %s (deletable)\n", dataSetName);
                        else
                            printf("    Data set: %s (not deletable)\n", dataSetName);

                        LinkedList dataSetMemberRef = LinkedList_getNext(dataSetMembers);

                        while (dataSetMemberRef != NULL) {
                            char* memberRef = (char*) dataSetMemberRef->data;
                            printf("      %s\n", memberRef);
                            dataSetMemberRef = LinkedList_getNext(dataSetMemberRef);
                        }

                        LinkedList_destroy(dataSetMembers);

                        dataSet = LinkedList_getNext(dataSet);
                    }

                    LinkedList_destroy(dataSets);

                    //报告读取
                    LinkedList reports = IedConnection_getLogicalNodeDirectory(con, &error, lnRef,
                            ACSI_CLASS_URCB);

                    LinkedList report = LinkedList_getNext(reports);

                    while (report != NULL) {
                        char* reportName = (char*) report->data;
                        printf("    RP: %s\n", reportName);
                        report = LinkedList_getNext(report);
                    }

                    LinkedList_destroy(reports);

                    reports = IedConnection_getLogicalNodeDirectory(con, &error, lnRef,
                            ACSI_CLASS_BRCB);

                    report = LinkedList_getNext(reports);

                    while (report != NULL) {
                        char* reportName = (char*) report->data;
                        printf("    BR: %s\n", reportName);
                        report = LinkedList_getNext(report);
                    }

                    LinkedList_destroy(reports);

                    logicalNode = LinkedList_getNext(logicalNode);
                }

                LinkedList_destroy(logicalNodes);

                device = LinkedList_getNext(device);
            }

            LinkedList_destroy(deviceList);

            goto exit_error;
        }
        else if (strcmp(cmd, "rpt") == 0) {
            //获取数据集目录
            dataSetDirectory = IedConnection_getDataSetDirectory(con, &error, "MC6000MONT/LLN0.dsAin1", NULL);

            if (error != IED_ERROR_OK) {
                printf("读取数据集目录失败!\n");
               goto exit_error;
            }

            //尝试读取数据集
            clientDataSet = IedConnection_readDataSetValues(con, &error, "MC6000MONT/LLN0.dsAin1", NULL);

            if (clientDataSet == NULL) {
                printf("读取数据集失败\n");
               goto exit_error;
            }

            //读取报告
            rcb = IedConnection_getRCBValues(con, &error, "MC6000MONT/LLN0.RP.urcbAin101", NULL);

            if (error != IED_ERROR_OK) {
                printf("获取报告服务失败!\n");
                goto exit_error;
            }

            //报告参数
            ClientReportControlBlock_setResv(rcb, true);
            ClientReportControlBlock_setTrgOps(rcb, TRG_OPT_DATA_CHANGED | TRG_OPT_QUALITY_CHANGED | TRG_OPT_GI);
            ClientReportControlBlock_setDataSetReference(rcb, "MC6000MONT/LLN0$dsAin1"); //逻辑节点和数据集之间用$连接
            ClientReportControlBlock_setRptEna(rcb, true);
            ClientReportControlBlock_setGI(rcb, true);

            //配置报告处理
            IedConnection_installReportHandler(con, "MC6000MONT/LLN0.RP.urcbAin1", ClientReportControlBlock_getRptId(rcb), reportCallbackFunction,
                    (void*) dataSetDirectory);
            //订阅报告
            IedConnection_setRCBValues(con, &error, rcb, RCB_ELEMENT_RESV | RCB_ELEMENT_DATSET | RCB_ELEMENT_TRG_OPS | RCB_ELEMENT_RPT_ENA | RCB_ELEMENT_GI, true);

            if (error != IED_ERROR_OK) {
                printf("订阅报告失败!\n");
                goto exit_error;
            }

            Thread_sleep(1000);

            //尝试触发
            ClientReportControlBlock_setGI(rcb, true);
            IedConnection_setRCBValues(con, &error, rcb, RCB_ELEMENT_GI, true);

            if (error != IED_ERROR_OK) {
                printf("报告触发失败 (code: %i)\n", error);
            }

            while (running) {
                Thread_sleep(10);
                IedConnectionState conState = IedConnection_getState(con);
                if (conState != IED_STATE_CONNECTED) {
                    printf("服务主动断开连接!\n");
                    running = 0;
                }
            }

            //取消订阅报告
            ClientReportControlBlock_setRptEna(rcb, false);
            IedConnection_setRCBValues(con, &error, rcb, RCB_ELEMENT_RPT_ENA, true);

        } 
        else if (strcmp(cmd, "file") == 0) {
            fileInfo(con);
            getFile(con);
        } else {
            printf("用法: %s <ds|rpt|file>\n", argv[0]);
            goto exit_error;
        }

exit_error:

        IedConnection_close(con);

        if (clientDataSet)
            ClientDataSet_destroy(clientDataSet);

        if (rcb)
            ClientReportControlBlock_destroy(rcb);

        if (dataSetDirectory)
            LinkedList_destroy(dataSetDirectory);
    }
    else {
        printf("连接失败 %s:%i\n", hostname, tcpPort);
    }

    IedConnection_destroy(con);
    return 0;
}
