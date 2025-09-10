/*
 * static_model.c
 *
 * automatically generated from MC_ICD_RFG.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_MONT_LLN0_dsAin1;
extern DataSet iedModelds_MONT_LLN0_dsAlarm1;


extern DataSetEntry iedModelds_MONT_LLN0_dsAin1_fcda0;
extern DataSetEntry iedModelds_MONT_LLN0_dsAin1_fcda1;

DataSetEntry iedModelds_MONT_LLN0_dsAin1_fcda0 = {
  "MONT",
  false,
  "CCMSPTR1$MX$CGAmp", 
  -1,
  NULL,
  NULL,
  &iedModelds_MONT_LLN0_dsAin1_fcda1
};

DataSetEntry iedModelds_MONT_LLN0_dsAin1_fcda1 = {
  "MONT",
  false,
  "CCMSPTR1$MX$ClpGAmp", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MONT_LLN0_dsAin1 = {
  "MONT",
  "LLN0$dsAin1",
  2,
  &iedModelds_MONT_LLN0_dsAin1_fcda0,
  &iedModelds_MONT_LLN0_dsAlarm1
};

extern DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda0;
extern DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda1;
extern DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda2;
extern DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda3;
extern DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda4;

DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda0 = {
  "MONT",
  false,
  "DGMGGIO1$ST$Alm1", 
  -1,
  NULL,
  NULL,
  &iedModelds_MONT_LLN0_dsAlarm1_fcda1
};

DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda1 = {
  "MONT",
  false,
  "DGMGGIO1$ST$Alm2", 
  -1,
  NULL,
  NULL,
  &iedModelds_MONT_LLN0_dsAlarm1_fcda2
};

DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda2 = {
  "MONT",
  false,
  "DGMGGIO1$ST$Alm3", 
  -1,
  NULL,
  NULL,
  &iedModelds_MONT_LLN0_dsAlarm1_fcda3
};

DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda3 = {
  "MONT",
  false,
  "CCMSPTR1$ST$CGAlm", 
  -1,
  NULL,
  NULL,
  &iedModelds_MONT_LLN0_dsAlarm1_fcda4
};

DataSetEntry iedModelds_MONT_LLN0_dsAlarm1_fcda4 = {
  "MONT",
  false,
  "CCMSPTR1$ST$ClpGAlm", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MONT_LLN0_dsAlarm1 = {
  "MONT",
  "LLN0$dsAlarm1",
  5,
  &iedModelds_MONT_LLN0_dsAlarm1_fcda0,
  NULL
};

LogicalDevice iedModel_MONT = {
    LogicalDeviceModelType,
    "MONT",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_MONT_LLN0,
    NULL
};

LogicalNode iedModel_MONT_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_MONT,
    (ModelNode*) &iedModel_MONT_LPHD1,
    (ModelNode*) &iedModel_MONT_LLN0_Mod,
};

DataObject iedModel_MONT_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MONT_LLN0,
    (ModelNode*) &iedModel_MONT_LLN0_Beh,
    (ModelNode*) &iedModel_MONT_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LLN0_Mod,
    (ModelNode*) &iedModel_MONT_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LLN0_Mod,
    (ModelNode*) &iedModel_MONT_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LLN0_Mod,
    (ModelNode*) &iedModel_MONT_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MONT_LLN0_Mod,
    (ModelNode*) &iedModel_MONT_LLN0_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LLN0_Mod,
    (ModelNode*) &iedModel_MONT_LLN0_Mod_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Mod_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MONT_LLN0,
    (ModelNode*) &iedModel_MONT_LLN0_Health,
    (ModelNode*) &iedModel_MONT_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LLN0_Beh,
    (ModelNode*) &iedModel_MONT_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LLN0_Beh,
    (ModelNode*) &iedModel_MONT_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LLN0_Beh,
    (ModelNode*) &iedModel_MONT_LLN0_Beh_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Beh_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LLN0_Beh,
    (ModelNode*) &iedModel_MONT_LLN0_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MONT_LLN0,
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt,
    (ModelNode*) &iedModel_MONT_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LLN0_Health,
    (ModelNode*) &iedModel_MONT_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LLN0_Health,
    (ModelNode*) &iedModel_MONT_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LLN0_Health,
    (ModelNode*) &iedModel_MONT_LLN0_Health_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Health_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LLN0_Health,
    (ModelNode*) &iedModel_MONT_LLN0_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MONT_LLN0,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_MONT_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt,
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt,
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt,
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt,
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt,
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_MONT_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LLN0_LEDRs = {
    DataObjectModelType,
    "LEDRs",
    (ModelNode*) &iedModel_MONT_LLN0,
    NULL,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw,
    0,
    -1
};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw = {
    DataAttributeModelType,
    "SBOw",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_ctlNum,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_origin,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_SBOw_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_SBOw,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_ctlNum,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_origin,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_stVal,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_ctlNum,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_origin,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_Cancel,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_pulseConfig = {
    DataAttributeModelType,
    "pulseConfig",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_ctlModel,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig_cmdQual,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_pulseConfig_cmdQual = {
    DataAttributeModelType,
    "cmdQual",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig_onDur,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_pulseConfig_onDur = {
    DataAttributeModelType,
    "onDur",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig_offDur,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_pulseConfig_offDur = {
    DataAttributeModelType,
    "offDur",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig_numPls,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_pulseConfig_numPls = {
    DataAttributeModelType,
    "numPls",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_pulseConfig,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_sboTimeout,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_sboTimeout = {
    DataAttributeModelType,
    "sboTimeout",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_sboClass,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_sboClass = {
    DataAttributeModelType,
    "sboClass",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LLN0_LEDRs_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MONT_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_MONT,
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    (ModelNode*) &iedModel_MONT_LPHD1_Mod,
};

DataObject iedModel_MONT_LPHD1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MONT_LPHD1,
    (ModelNode*) &iedModel_MONT_LPHD1_Beh,
    (ModelNode*) &iedModel_MONT_LPHD1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_LPHD1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LPHD1_Mod,
    (ModelNode*) &iedModel_MONT_LPHD1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LPHD1_Mod,
    (ModelNode*) &iedModel_MONT_LPHD1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LPHD1_Mod,
    (ModelNode*) &iedModel_MONT_LPHD1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MONT_LPHD1_Mod,
    (ModelNode*) &iedModel_MONT_LPHD1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LPHD1_Mod,
    (ModelNode*) &iedModel_MONT_LPHD1_Mod_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Mod_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LPHD1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LPHD1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MONT_LPHD1,
    (ModelNode*) &iedModel_MONT_LPHD1_Health,
    (ModelNode*) &iedModel_MONT_LPHD1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_LPHD1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LPHD1_Beh,
    (ModelNode*) &iedModel_MONT_LPHD1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LPHD1_Beh,
    (ModelNode*) &iedModel_MONT_LPHD1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LPHD1_Beh,
    (ModelNode*) &iedModel_MONT_LPHD1_Beh_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Beh_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LPHD1_Beh,
    (ModelNode*) &iedModel_MONT_LPHD1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LPHD1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LPHD1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MONT_LPHD1,
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt,
    (ModelNode*) &iedModel_MONT_LPHD1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_LPHD1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LPHD1_Health,
    (ModelNode*) &iedModel_MONT_LPHD1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LPHD1_Health,
    (ModelNode*) &iedModel_MONT_LPHD1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LPHD1_Health,
    (ModelNode*) &iedModel_MONT_LPHD1_Health_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Health_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LPHD1_Health,
    (ModelNode*) &iedModel_MONT_LPHD1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LPHD1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LPHD1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MONT_LPHD1,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_MONT_LPHD1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt,
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt,
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt,
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt,
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_MONT_LPHD1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_MONT_LPHD1,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_MONT_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_hwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_hwRev = {
    DataAttributeModelType,
    "hwRev",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_swRevCrc,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_swRevCrc = {
    DataAttributeModelType,
    "swRevCrc",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_swDate,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_swDate = {
    DataAttributeModelType,
    "swDate",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_adSwRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_adSwRev = {
    DataAttributeModelType,
    "adSwRev",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_adSwRevCrc,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_adSwRevCrc = {
    DataAttributeModelType,
    "adSwRevCrc",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_adSwDate,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_adSwDate = {
    DataAttributeModelType,
    "adSwDate",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_serNum,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_location,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_location = {
    DataAttributeModelType,
    "location",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyNam_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_MONT_LPHD1,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyHealth_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_PhyHealth_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_MONT_LPHD1,
    NULL,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Proxy_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Proxy_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Proxy_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Proxy_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Proxy_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MONT_CCMSPTR1 = {
    LogicalNodeModelType,
    "CCMSPTR1",
    (ModelNode*) &iedModel_MONT,
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod,
};

DataObject iedModel_MONT_CCMSPTR1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_CCMSPTR1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Mod_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_CCMSPTR1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_CCMSPTR1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Beh_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_CCMSPTR1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_CCMSPTR1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Health_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_CCMSPTR1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_MONT_CCMSPTR1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt_swDate,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_NamPlt_swDate = {
    DataAttributeModelType,
    "swDate",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt_swRevCrc,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_NamPlt_swRevCrc = {
    DataAttributeModelType,
    "swRevCrc",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_CCMSPTR1_CGAmp = {
    DataObjectModelType,
    "CGAmp",
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_q,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_subQ,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_db,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_units,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_sVC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_smpRate,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_min,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_max,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAmp_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAmp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_CCMSPTR1_ClpGAmp = {
    DataObjectModelType,
    "ClpGAmp",
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_q,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_subQ,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_db,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_units,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_sVC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_smpRate,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_min,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_max,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAmp_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAmp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_CCMSPTR1_CGAlm = {
    DataObjectModelType,
    "CGAlm",
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_CGAlm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_CGAlm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_CCMSPTR1_ClpGAlm = {
    DataObjectModelType,
    "ClpGAlm",
    (ModelNode*) &iedModel_MONT_CCMSPTR1,
    NULL,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_CCMSPTR1_ClpGAlm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_CCMSPTR1_ClpGAlm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MONT_DGMGGIO1 = {
    LogicalNodeModelType,
    "DGMGGIO1",
    (ModelNode*) &iedModel_MONT,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod,
};

DataObject iedModel_MONT_DGMGGIO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod_d,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mod_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Beh_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Health_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt_swDate,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NamPlt_swDate = {
    DataAttributeModelType,
    "swDate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt_swRevCrc,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NamPlt_swRevCrc = {
    DataAttributeModelType,
    "swRevCrc",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NamPlt_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_MoDevConf = {
    DataObjectModelType,
    "MoDevConf",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_MoDevConf_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_MoDevConf,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_SupDevRun = {
    DataObjectModelType,
    "SupDevRun",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SupDevRun_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SupDevRun,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm1 = {
    DataObjectModelType,
    "Alm1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm2 = {
    DataObjectModelType,
    "Alm2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm3 = {
    DataObjectModelType,
    "Alm3",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm3,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm4 = {
    DataObjectModelType,
    "Alm4",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm4,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm5 = {
    DataObjectModelType,
    "Alm5",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm5_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm5,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm6 = {
    DataObjectModelType,
    "Alm6",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm6_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm6,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm7 = {
    DataObjectModelType,
    "Alm7",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm7_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm7,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm8 = {
    DataObjectModelType,
    "Alm8",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm8_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm8,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm9 = {
    DataObjectModelType,
    "Alm9",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm9_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm9,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm10 = {
    DataObjectModelType,
    "Alm10",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm10_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm10,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm11 = {
    DataObjectModelType,
    "Alm11",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm11_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm11,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm12 = {
    DataObjectModelType,
    "Alm12",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm12_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm12,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm13 = {
    DataObjectModelType,
    "Alm13",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm13_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm13,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm14 = {
    DataObjectModelType,
    "Alm14",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm14_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm14,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm15 = {
    DataObjectModelType,
    "Alm15",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm15_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm15,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm16 = {
    DataObjectModelType,
    "Alm16",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm16_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm16,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Alm17 = {
    DataObjectModelType,
    "Alm17",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_stVal,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_subVal,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_subVal = {
    DataAttributeModelType,
    "subVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_subQ,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Alm17_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Alm17,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_H2ppms1 = {
    DataObjectModelType,
    "H2ppms1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_COppms1 = {
    DataObjectModelType,
    "COppms1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_CO2ppms1 = {
    DataObjectModelType,
    "CO2ppms1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_CH4ppms1 = {
    DataObjectModelType,
    "CH4ppms1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H4ppms1 = {
    DataObjectModelType,
    "C2H4ppms1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H2ppms1 = {
    DataObjectModelType,
    "C2H2ppms1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H6ppms1 = {
    DataObjectModelType,
    "C2H6ppms1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Totalhydrs1 = {
    DataObjectModelType,
    "Totalhydrs1",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs1,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_H2ppms2 = {
    DataObjectModelType,
    "H2ppms2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppms2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppms2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_COppms2 = {
    DataObjectModelType,
    "COppms2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppms2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppms2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_CO2ppms2 = {
    DataObjectModelType,
    "CO2ppms2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppms2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppms2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_CH4ppms2 = {
    DataObjectModelType,
    "CH4ppms2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppms2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppms2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H4ppms2 = {
    DataObjectModelType,
    "C2H4ppms2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppms2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppms2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H2ppms2 = {
    DataObjectModelType,
    "C2H2ppms2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppms2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppms2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H6ppms2 = {
    DataObjectModelType,
    "C2H6ppms2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppms2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppms2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Totalhydrs2 = {
    DataObjectModelType,
    "Totalhydrs2",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydrs2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydrs2,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_H2ppm = {
    DataObjectModelType,
    "H2ppm",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_H2ppm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_H2ppm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_COppm = {
    DataObjectModelType,
    "COppm",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_COppm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_COppm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_CO2ppm = {
    DataObjectModelType,
    "CO2ppm",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CO2ppm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CO2ppm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_CH4ppm = {
    DataObjectModelType,
    "CH4ppm",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_CH4ppm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_CH4ppm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H4ppm = {
    DataObjectModelType,
    "C2H4ppm",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H4ppm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H4ppm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H2ppm = {
    DataObjectModelType,
    "C2H2ppm",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H2ppm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H2ppm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_C2H6ppm = {
    DataObjectModelType,
    "C2H6ppm",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_C2H6ppm_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_C2H6ppm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Totalhydr = {
    DataObjectModelType,
    "Totalhydr",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalhydr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalhydr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Totalgas = {
    DataObjectModelType,
    "Totalgas",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Totalgas_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Totalgas,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_Mst = {
    DataObjectModelType,
    "Mst",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_mag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_q,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_subQ,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_db,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_zeroDb,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_zeroDb = {
    DataAttributeModelType,
    "zeroDb",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_sVC,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC = {
    DataAttributeModelType,
    "rangeC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_smpRate,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_hhLim,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_hhLim = {
    DataAttributeModelType,
    "hhLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_hLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_hhLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_hhLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_hhLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_hLim = {
    DataAttributeModelType,
    "hLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_lLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_hLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_hLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_hLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_lLim = {
    DataAttributeModelType,
    "lLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_llLim,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_lLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_lLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_lLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_llLim = {
    DataAttributeModelType,
    "llLim",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_min,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_llLim_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_llLim_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_llLim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_min = {
    DataAttributeModelType,
    "min",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_max,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_min_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_min_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_min,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_max = {
    DataAttributeModelType,
    "max",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_max_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_rangeC_max_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_rangeC_max,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_smpRate = {
    DataAttributeModelType,
    "smpRate",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_dU,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_Mst_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_Mst,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_SmpProd = {
    DataObjectModelType,
    "SmpProd",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_SmpProd_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_SmpProd,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_StartWork = {
    DataObjectModelType,
    "StartWork",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_StartWork_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_StartWork,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_MONT_DGMGGIO1_NextWorkTime = {
    DataObjectModelType,
    "NextWorkTime",
    (ModelNode*) &iedModel_MONT_DGMGGIO1,
    NULL,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_setMag,
    0,
    -1
};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_units,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_minVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_sVC,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_maxVal,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_stepSize,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_stepSize = {
    DataAttributeModelType,
    "stepSize",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_dU,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_stepSize_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_stepSize_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_stepSize,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_dU = {
    DataAttributeModelType,
    "dU",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_UNICODE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MONT_DGMGGIO1_NextWorkTime_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MONT_DGMGGIO1_NextWorkTime,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_MONT_LLN0_report0;
extern ReportControlBlock iedModel_MONT_LLN0_report1;
extern ReportControlBlock iedModel_MONT_LLN0_report2;
extern ReportControlBlock iedModel_MONT_LLN0_report3;
extern ReportControlBlock iedModel_MONT_LLN0_report4;
extern ReportControlBlock iedModel_MONT_LLN0_report5;
extern ReportControlBlock iedModel_MONT_LLN0_report6;
extern ReportControlBlock iedModel_MONT_LLN0_report7;
extern ReportControlBlock iedModel_MONT_LLN0_report8;
extern ReportControlBlock iedModel_MONT_LLN0_report9;
extern ReportControlBlock iedModel_MONT_LLN0_report10;
extern ReportControlBlock iedModel_MONT_LLN0_report11;
extern ReportControlBlock iedModel_MONT_LLN0_report12;
extern ReportControlBlock iedModel_MONT_LLN0_report13;
extern ReportControlBlock iedModel_MONT_LLN0_report14;
extern ReportControlBlock iedModel_MONT_LLN0_report15;
extern ReportControlBlock iedModel_MONT_LLN0_report16;
extern ReportControlBlock iedModel_MONT_LLN0_report17;
extern ReportControlBlock iedModel_MONT_LLN0_report18;
extern ReportControlBlock iedModel_MONT_LLN0_report19;
extern ReportControlBlock iedModel_MONT_LLN0_report20;
extern ReportControlBlock iedModel_MONT_LLN0_report21;
extern ReportControlBlock iedModel_MONT_LLN0_report22;
extern ReportControlBlock iedModel_MONT_LLN0_report23;
extern ReportControlBlock iedModel_MONT_LLN0_report24;
extern ReportControlBlock iedModel_MONT_LLN0_report25;
extern ReportControlBlock iedModel_MONT_LLN0_report26;
extern ReportControlBlock iedModel_MONT_LLN0_report27;
extern ReportControlBlock iedModel_MONT_LLN0_report28;
extern ReportControlBlock iedModel_MONT_LLN0_report29;
extern ReportControlBlock iedModel_MONT_LLN0_report30;
extern ReportControlBlock iedModel_MONT_LLN0_report31;

ReportControlBlock iedModel_MONT_LLN0_report0 = {&iedModel_MONT_LLN0, "urcbAin101", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report1};
ReportControlBlock iedModel_MONT_LLN0_report1 = {&iedModel_MONT_LLN0, "urcbAin102", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report2};
ReportControlBlock iedModel_MONT_LLN0_report2 = {&iedModel_MONT_LLN0, "urcbAin103", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report3};
ReportControlBlock iedModel_MONT_LLN0_report3 = {&iedModel_MONT_LLN0, "urcbAin104", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report4};
ReportControlBlock iedModel_MONT_LLN0_report4 = {&iedModel_MONT_LLN0, "urcbAin105", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report5};
ReportControlBlock iedModel_MONT_LLN0_report5 = {&iedModel_MONT_LLN0, "urcbAin106", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report6};
ReportControlBlock iedModel_MONT_LLN0_report6 = {&iedModel_MONT_LLN0, "urcbAin107", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report7};
ReportControlBlock iedModel_MONT_LLN0_report7 = {&iedModel_MONT_LLN0, "urcbAin108", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report8};
ReportControlBlock iedModel_MONT_LLN0_report8 = {&iedModel_MONT_LLN0, "urcbAin109", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report9};
ReportControlBlock iedModel_MONT_LLN0_report9 = {&iedModel_MONT_LLN0, "urcbAin110", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report10};
ReportControlBlock iedModel_MONT_LLN0_report10 = {&iedModel_MONT_LLN0, "urcbAin111", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report11};
ReportControlBlock iedModel_MONT_LLN0_report11 = {&iedModel_MONT_LLN0, "urcbAin112", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report12};
ReportControlBlock iedModel_MONT_LLN0_report12 = {&iedModel_MONT_LLN0, "urcbAin113", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report13};
ReportControlBlock iedModel_MONT_LLN0_report13 = {&iedModel_MONT_LLN0, "urcbAin114", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report14};
ReportControlBlock iedModel_MONT_LLN0_report14 = {&iedModel_MONT_LLN0, "urcbAin115", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report15};
ReportControlBlock iedModel_MONT_LLN0_report15 = {&iedModel_MONT_LLN0, "urcbAin116", "MC6000MONT/LLN0$urcbAin1", false, "dsAin1", 1, 27, 191, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report16};
ReportControlBlock iedModel_MONT_LLN0_report16 = {&iedModel_MONT_LLN0, "brcbAlarm101", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report17};
ReportControlBlock iedModel_MONT_LLN0_report17 = {&iedModel_MONT_LLN0, "brcbAlarm102", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report18};
ReportControlBlock iedModel_MONT_LLN0_report18 = {&iedModel_MONT_LLN0, "brcbAlarm103", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report19};
ReportControlBlock iedModel_MONT_LLN0_report19 = {&iedModel_MONT_LLN0, "brcbAlarm104", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report20};
ReportControlBlock iedModel_MONT_LLN0_report20 = {&iedModel_MONT_LLN0, "brcbAlarm105", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report21};
ReportControlBlock iedModel_MONT_LLN0_report21 = {&iedModel_MONT_LLN0, "brcbAlarm106", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report22};
ReportControlBlock iedModel_MONT_LLN0_report22 = {&iedModel_MONT_LLN0, "brcbAlarm107", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report23};
ReportControlBlock iedModel_MONT_LLN0_report23 = {&iedModel_MONT_LLN0, "brcbAlarm108", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report24};
ReportControlBlock iedModel_MONT_LLN0_report24 = {&iedModel_MONT_LLN0, "brcbAlarm109", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report25};
ReportControlBlock iedModel_MONT_LLN0_report25 = {&iedModel_MONT_LLN0, "brcbAlarm110", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report26};
ReportControlBlock iedModel_MONT_LLN0_report26 = {&iedModel_MONT_LLN0, "brcbAlarm111", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report27};
ReportControlBlock iedModel_MONT_LLN0_report27 = {&iedModel_MONT_LLN0, "brcbAlarm112", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report28};
ReportControlBlock iedModel_MONT_LLN0_report28 = {&iedModel_MONT_LLN0, "brcbAlarm113", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report29};
ReportControlBlock iedModel_MONT_LLN0_report29 = {&iedModel_MONT_LLN0, "brcbAlarm114", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report30};
ReportControlBlock iedModel_MONT_LLN0_report30 = {&iedModel_MONT_LLN0, "brcbAlarm115", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MONT_LLN0_report31};
ReportControlBlock iedModel_MONT_LLN0_report31 = {&iedModel_MONT_LLN0, "brcbAlarm116", "MONT/LLN0$brcbAlarm1", true, "dsAlarm1", 1, 19, 255, 0, 10000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};




extern LogControlBlock iedModel_MONT_LLN0_lcb0;
extern LogControlBlock iedModel_MONT_LLN0_lcb1;
LogControlBlock iedModel_MONT_LLN0_lcb0 = {&iedModel_MONT_LLN0, "EventLog", "dsAin1", "MONT/LLN0$EventLog", 3, 0, true, true, &iedModel_MONT_LLN0_lcb1};
LogControlBlock iedModel_MONT_LLN0_lcb1 = {&iedModel_MONT_LLN0, "GeneralLog", NULL, NULL, 3, 0, true, true, NULL};

extern Log iedModel_MONT_LLN0_log0;
extern Log iedModel_MONT_LLN0_log1;
Log iedModel_MONT_LLN0_log0 = {&iedModel_MONT_LLN0, "GeneralLog", &iedModel_MONT_LLN0_log1};
Log iedModel_MONT_LLN0_log1 = {&iedModel_MONT_LLN0, "EventLog", NULL};


IedModel iedModel = {
    "MC6000",
    &iedModel_MONT,
    &iedModelds_MONT_LLN0_dsAin1,
    &iedModel_MONT_LLN0_report0,
    NULL,
    NULL,
    NULL,
    &iedModel_MONT_LLN0_lcb0,
    &iedModel_MONT_LLN0_log0,
    initializeValues
};

static void
initializeValues()
{

iedModel_MONT_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MONT_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2003");

iedModel_MONT_LPHD1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MONT_LPHD1_NamPlt_lnNs.mmsValue = MmsValue_newVisibleString("SGCC MODEL: 2012");

iedModel_MONT_CCMSPTR1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MONT_CCMSPTR1_CGAmp_dU.mmsValue = MmsValue_newMmsString("铁芯接地电流");

iedModel_MONT_CCMSPTR1_CGAmp_d.mmsValue = MmsValue_newVisibleString("");

iedModel_MONT_CCMSPTR1_ClpGAmp_dU.mmsValue = MmsValue_newMmsString("夹件接地电流");

iedModel_MONT_CCMSPTR1_ClpGAmp_d.mmsValue = MmsValue_newVisibleString("");

iedModel_MONT_CCMSPTR1_CGAlm_dU.mmsValue = MmsValue_newMmsString("铁心接地电流值报警");

iedModel_MONT_CCMSPTR1_ClpGAlm_dU.mmsValue = MmsValue_newMmsString("夹件接地电流值报警");

iedModel_MONT_CCMSPTR1_ClpGAlm_d.mmsValue = MmsValue_newVisibleString("");

iedModel_MONT_DGMGGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_MONT_DGMGGIO1_Alm1_dU.mmsValue = MmsValue_newMmsString("主控单元自身工作状态异常");

iedModel_MONT_DGMGGIO1_Alm1_d.mmsValue = MmsValue_newVisibleString("");

iedModel_MONT_DGMGGIO1_Alm2_dU.mmsValue = MmsValue_newMmsString("主控单元时钟同步信号丢失");

iedModel_MONT_DGMGGIO1_Alm3_dU.mmsValue = MmsValue_newMmsString("被监测设备停运");
}
