#include "Std_Types.hpp"

#include "DcmCore_DslDsd_Inf.hpp"

#if(DCM_CFG_DSPUDSSUPPORT_ENABLED != DCM_CFG_OFF)&&(DCM_CFG_DSP_REQUESTTRANSFEREXIT_ENABLED != DCM_CFG_OFF)
#define DCM_START_SEC_CODE
#include "Dcm_Cfg_MemMap.hpp"
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_Dcm_ProcessRequestTransferExit(
                                                                VAR(Dcm_OpStatusType, AUTOMATIC) OpStatus
   ,     P2CONST(uint8, DCM_INTERN_DATA, AUTOMATIC) transferRequestParameterRecord
   ,     VAR(uint32, AUTOMATIC) transferRequestParameterRecordSize
   ,     P2VAR(uint8, DCM_INTERN_DATA, AUTOMATIC) transferResponseParameterRecord
   ,     P2VAR(uint32, DCM_INTERN_DATA, AUTOMATIC) transferResponseParameterRecordSize
   ,     P2VAR(Dcm_NegativeResponseCodeType, DCM_INTERN_DATA, AUTOMATIC) ErrorCode)

{
   VAR(Std_ReturnType, AUTOMATIC) retVal_u8;
    retVal_u8 = E_OK;
    (void)OpStatus;
    (void)transferRequestParameterRecord;
    (void)transferRequestParameterRecordSize;
    (void)transferResponseParameterRecord;
    (void)transferResponseParameterRecordSize;
    (void)ErrorCode;
    return retVal_u8;
}
#define DCM_STOP_SEC_CODE
#include "Dcm_Cfg_MemMap.hpp"
#endif
