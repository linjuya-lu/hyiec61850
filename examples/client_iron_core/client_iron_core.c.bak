#include "iec61850_client.h"

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <time.h>

#include "hal_thread.h"

static int running = 0;

void sigint_handler(int signalId)
{
    running = 0;
}


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
    char* hostname;
    int tcpPort = 102;

    if (argc > 1)
        hostname = argv[1];
    else
        hostname = "0.0.0.0";

    if (argc > 2)
        tcpPort = atoi(argv[2]);

    running = 1;

    signal(SIGINT, sigint_handler);

    IedClientError error;

    IedConnection con = IedConnection_create();

    IedConnection_connect(con, &error, hostname, tcpPort);

    if (error == IED_ERROR_OK) {

        ClientReportControlBlock rcb = NULL;
        ClientDataSet clientDataSet = NULL;
        LinkedList dataSetDirectory = NULL;

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


