#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "static_model.h"

#include "logging_api.h"
LogStorage SqliteLogStorage_createInstance(const char* filename);

static int running = 0;
static IedServer iedServer = NULL;

void
sigint_handler(int signalId)
{
    running = 0;
}


static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test) return CONTROL_RESULT_FAILED;
    if (MmsValue_getType(value) != MMS_BOOLEAN) return CONTROL_RESULT_FAILED;

    bool on = MmsValue_getBoolean(value);
    printf("received binary control command: %s\n", on ? "on" : "off");

    uint64_t timeStamp = Hal_getTimeInMs();

    if (parameter == IEDMODEL_MONT_DGMGGIO1_Alm11) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm11_t, timeStamp);
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm11_stVal, on);
    } else if (parameter == IEDMODEL_MONT_DGMGGIO1_Alm12) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm12_t, timeStamp);
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm12_stVal, on);
    } else if (parameter == IEDMODEL_MONT_DGMGGIO1_Alm13) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm13_t, timeStamp);
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm13_stVal, on);
    } else if (parameter == IEDMODEL_MONT_DGMGGIO1_Alm14) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm14_t, timeStamp);
        IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm14_stVal, on);
    }

    return CONTROL_RESULT_OK;
}


static void
connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter)
{
    if (connected)
        printf("Connection opened\n");
    else
        printf("Connection closed\n");
}

static void
rcbEventHandler(void* parameter, ReportControlBlock* rcb, ClientConnection connection, IedServer_RCBEventType event, const char* parameterName, MmsDataAccessError serviceError)
{
    printf("RCB: %s event: %i\n", ReportControlBlock_getName(rcb), event);

    if ((event == RCB_EVENT_SET_PARAMETER) || (event == RCB_EVENT_GET_PARAMETER))
    {
        printf("  param:  %s\n", parameterName);
        printf("  result: %i\n", serviceError);
    }

    if (event == RCB_EVENT_ENABLE)
    {
        char* rptId = ReportControlBlock_getRptID(rcb);
        printf("   rptID:  %s\n", rptId);
        char* dataSet = ReportControlBlock_getDataSet(rcb);
        printf("   datSet: %s\n", dataSet);

        free(rptId);
        free(dataSet);
    }
}


//日志记录
static void
log_value(LogStorage ls, uint64_t entryID, const char* dataRef, MmsValue* v)
{
    uint8_t blob[256];
    int sz = MmsValue_encodeMmsData(v, blob, 0, true);
    LogStorage_addEntryData(ls, entryID, dataRef, blob, sz, 0);
}

int main(int argc, char** argv)
{
    int tcpPort = 102;
    if (argc > 1) tcpPort = atoi(argv[1]);

    printf("库版本 %s\n", LibIEC61850_getVersionString());

    // 服务器配置
    IedServerConfig cfg = IedServerConfig_create();
    IedServerConfig_setEdition(cfg, IEC_61850_EDITION_2);
    IedServerConfig_setReportBufferSize(cfg, 200000);       // 报告分配200KB缓冲
    IedServerConfig_enableFileService(cfg, true);
    IedServerConfig_setFileServiceBasePath(cfg, "./vmd-filestore/");
    IedServerConfig_enableDynamicDataSetService(cfg, true);
    IedServerConfig_enableLogService(cfg, true);            // 日志服务
    IedServerConfig_setMaxMmsConnections(cfg, 2);           //支持客户端数

    //服务器创建
    iedServer = IedServer_createWithConfig(&iedModel, NULL, cfg);
    IedServerConfig_destroy(cfg);                           

    IedServer_setServerIdentity(iedServer, "HY", "iron core", "1.6.0");

    //连接/RCB 事件
    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);
    IedServer_setRCBEventHandler(iedServer, rcbEventHandler, NULL);

    /* 可写策略 */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_DC, ACCESS_POLICY_ALLOW);

    /* 你若想用“控制回调”来驱动 Alm11..14，请确保已在模型里把相应对象注册。
       注意：IedServer_setControlHandler 需要传 *可控对象*（通常是 SPCSOx/DPCSOx），
       不是普通 DataAttribute。，parameter 用 Alm11..14 自身： */
    IedServer_setControlHandler(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm11, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_MONT_DGMGGIO1_Alm11);
    IedServer_setControlHandler(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm12, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_MONT_DGMGGIO1_Alm12);
    IedServer_setControlHandler(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm13, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_MONT_DGMGGIO1_Alm13);
    IedServer_setControlHandler(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm14, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_MONT_DGMGGIO1_Alm14);

    //日志存储
    LogStorage statusLog = SqliteLogStorage_createInstance("log_status.db");
    LogStorage_setMaxLogEntries(statusLog, 1000);
    
    IedServer_setLogStorage(iedServer, "MONT/LLN0$EventLog", statusLog);

    //启动
    IedServer_start(iedServer, tcpPort);
    if (!IedServer_isRunning(iedServer)) {
        printf("Starting server failed (need root? or port busy?)\n");
        IedServer_destroy(iedServer);
        LogStorage_destroy(statusLog);
        return -1;
    }

    running = 1;
    signal(SIGINT, sigint_handler);


    // 控制更新频率：每隔多少毫秒更新一次模型（这里示例为 5000 ms = 5 s）
    const uint64_t updateIntervalMs = 5000;
    uint64_t lastUpdateMs = 0;

    float t = 0.f;
    while (running) {
        uint64_t nowMs = Hal_getTimeInMs();
        // 增量时间用于生成周期性波形（仅在更新时增长，或也可按实际时间增长）
        t += 0.1f;

        // 只有在超过 updateIntervalMs 时才实际改变模型并写日志
        if (nowMs - lastUpdateMs >= updateIntervalMs) {
            lastUpdateMs = nowMs;

            /* ---- 模拟两个电流 ----
               直流基值 + 正弦摆动 + 一点高频抖动 + 少量随机噪声
            */
            float base1 = 5.0f, base2 = 3.5f;   // 5A / 3.5A基值（A）
            float ac1   = 0.5f * sinf(t);      // 低频摆动
            float ac2   = 0.4f * sinf(t + 1.0f);

            float ripple1 = 2.0f * sinf(0.35f * t);  // 轻微涟波
            float ripple2 = 1.8f * sinf(0.42f * t);
            float noise1 = ((rand() % 200) - 100) / 1000.0f; // ±0.1A 噪声
            float noise2 = ((rand() % 200) - 100) / 1000.0f;

            float an1 = base1 + ac1 + ripple1 + noise1;  // 铁芯电流（CGAmp）
            float an2 = base2 + ac2 + ripple2 + noise2;  // 夹件电流（ClpGAmp）

            const uint64_t tzOffsetMs = 8ULL * 60ULL * 60ULL * 1000ULL; // +8 小时
            Timestamp ts;
            Timestamp_clearFlags(&ts);
            Timestamp_setTimeInMilliseconds(&ts, nowMs + tzOffsetMs); // 偏移
            Timestamp_setLeapSecondKnown(&ts, true);
            if (((int)t % 2) == 0) Timestamp_setClockNotSynchronized(&ts, true);

            IedServer_lockDataModel(iedServer);

            // 更新测量值与时间戳
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_MONT_CCMSPTR1_CGAmp_mag_f,  an1);
            IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_MONT_CCMSPTR1_ClpGAmp_mag_f, an2);
            IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_MONT_CCMSPTR1_CGAmp_t,  &ts);
            IedServer_updateTimestampAttributeValue(iedServer, IEDMODEL_MONT_CCMSPTR1_ClpGAmp_t, &ts);

            // 告警模拟（按 t 的周期翻转）
            static bool flip1 = false, flip2 = false, flip3 = false;
            flip1 = !flip1;
            if (((int)t % 3) == 0) flip2 = !flip2;
            if (((int)t % 5) == 0) flip3 = !flip3;

            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm1_stVal, flip1);
            IedServer_updateUTCTimeAttributeValue(iedServer,   IEDMODEL_MONT_DGMGGIO1_Alm1_t,    Hal_getTimeInMs());

            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm2_stVal, flip2);
            IedServer_updateUTCTimeAttributeValue(iedServer,   IEDMODEL_MONT_DGMGGIO1_Alm2_t,    Hal_getTimeInMs());

            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_DGMGGIO1_Alm3_stVal, flip3);
            IedServer_updateUTCTimeAttributeValue(iedServer,   IEDMODEL_MONT_DGMGGIO1_Alm3_t,    Hal_getTimeInMs());

            // 基于门槛的布尔告警
            bool cg = (an1 > 0.5f);
            bool clp = (an2 > 0.5f);
            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_CCMSPTR1_CGAlm_stVal,   cg);
            IedServer_updateUTCTimeAttributeValue(iedServer,   IEDMODEL_MONT_CCMSPTR1_CGAlm_t,     Hal_getTimeInMs());
            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_MONT_CCMSPTR1_ClpGAlm_stVal, clp);
            IedServer_updateUTCTimeAttributeValue(iedServer,   IEDMODEL_MONT_CCMSPTR1_ClpGAlm_t,   Hal_getTimeInMs());

            IedServer_unlockDataModel(iedServer);

            // 将测量/告警写入日志数据库
            uint64_t entryID = LogStorage_addEntry(statusLog, nowMs);

            MmsValue* v;
            v = MmsValue_newFloat(an1);
            log_value(statusLog, entryID, "MONT/CCMSPTR1$MX$CGAmp$mag$f", v);
            MmsValue_delete(v);

            v = MmsValue_newFloat(an2);
            log_value(statusLog, entryID, "MONT/CCMSPTR1$MX$ClpGAmp$mag$f", v);
            MmsValue_delete(v);

            v = MmsValue_newBoolean(cg);
            log_value(statusLog, entryID, "MONT/CCMSPTR1$ST$CGAlm$stVal", v);
            MmsValue_delete(v);

            v = MmsValue_newBoolean(clp);
            log_value(statusLog, entryID, "MONT/CCMSPTR1$ST$ClpGAlm$stVal", v);
            MmsValue_delete(v);

            v = MmsValue_newUtcTimeByMsTime(nowMs);
            log_value(statusLog, entryID, "MONT/LLN0$ST$Health$t", v);
            MmsValue_delete(v);
        } // end if (time to update)

        // 每次循环短暂休眠，降低 CPU 占用并响应 SIGINT
        Thread_sleep(1000);
    } // end while

    //退出清理
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    LogStorage_destroy(statusLog);   
    return 0;
}
