/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: China FAW Group Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC297TA
 *    License Scope : The usage is restricted to CBD1600956_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Lcfg.c
 *   Generation Time: 2024-10-16 11:34:53
 *           Project: TC27x - Version 1.0
 *          Delivery: CBD1600956_D01
 *      Tool Version: DaVinci Configurator  5.20.35
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA  S 1881 EOF */ /* MD_MSR_AutosarBoolean */
/* PRQA  S 1882 EOF */ /* MD_MSR_AutosarBoolean */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"

#include "Com_Lcfg.h"


#include "SchM_Com.h"

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x00u   /* [/ActiveEcuC/Com/ComConfig/lock_cmd_oLOCK_Control_oCAN00_cf665a91_RxInitValue, /ActiveEcuC/Com/ComConfig/sig_RearLeftWindowPosition_omsg_Receive2_oCAN00_89d4d489_RxInitValue, /ActiveEcuC/Com/ComConfig/sig_RearRightWindowPosition_omsg_Receive2_oCAN00_94575df2_RxInitValue, /ActiveEcuC/Com/ComConfig/sig_State_RearInteriorLight_omsg_Receive_oCAN00_63323183_RxInitValue, /ActiveEcuC/Com/ComConfig/sig_State_RearLeftDoor_omsg_Receive_oCAN00_84ad4140_RxInitValue, /ActiveEcuC/Com/ComConfig/sig_State_RearRightDoor_omsg_Receive_oCAN00_a8945098_RxInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PduGrpVector      Referable Keys */
  /*     0 */         0x02u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*     1 */         0x01u   /* [/ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                   Description
  InitValueUsed             TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  ByteLength                Byte length of the signal or group signal.
  InitValueIdx              the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxPduInfoIdx              the index of the 1:1 relation pointing to Com_RxPduInfo
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitValueUsed  BitLength  BitPosition  ByteLength  InitValueIdx  RxPduInfoIdx  StartByteInPduPosition        Referable Keys */
  { /*     0 */          TRUE,        2u,          0u,         0u,           0u,           0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/lock_cmd_oLOCK_Control_oCAN00_cf665a91_Rx, /ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx] */
  { /*     1 */          TRUE,        8u,         56u,         1u,           0u,           1u,                     7u },  /* [/ActiveEcuC/Com/ComConfig/sig_RearLeftWindowPosition_omsg_Receive2_oCAN00_89d4d489_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx] */
  { /*     2 */          TRUE,        8u,          8u,         1u,           0u,           1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/sig_RearRightWindowPosition_omsg_Receive2_oCAN00_94575df2_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx] */
  { /*     3 */          TRUE,        1u,          2u,         0u,           0u,           2u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearInteriorLight_omsg_Receive_oCAN00_63323183_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  { /*     4 */          TRUE,        1u,          0u,         0u,           0u,           2u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearLeftDoor_omsg_Receive_oCAN00_84ad4140_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  { /*     5 */          TRUE,        1u,          1u,         0u,           0u,           2u,                     0u }   /* [/ActiveEcuC/Com/ComConfig/sig_State_RearRightDoor_omsg_Receive_oCAN00_a8945098_Rx, /ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Rx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduGrpInfoType, COM_CONST) Com_RxPduGrpInfo[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   1u },
  { /*     1 */                   1u },
  { /*     2 */                   1u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                   Description
  RxAccessInfoIndUsed       TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  RxDefPduBufferStartIdx    the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxSigInfoEndIdx           the end index of the 0:n relation pointing to Com_RxSigInfo
  RxSigInfoStartIdx         the start index of the 0:n relation pointing to Com_RxSigInfo
  Type                      Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxAccessInfoIndUsed  RxDefPduBufferStartIdx  RxSigInfoEndIdx  RxSigInfoStartIdx  Type                              Referable Keys */
  { /*     0 */                TRUE,                     0u,              1u,                0u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */
  { /*     1 */                TRUE,                     8u,              3u,                1u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */
  { /*     2 */                TRUE,                    16u,              6u,                3u, COM_NORMAL_TYPEOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element             Description
  SignalProcessing
  ValidDlc            Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    SignalProcessing                          ValidDlc        Referable Keys */
  { /*     0 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx] */
  { /*     1 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx] */
  { /*     2 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx] */
  { /*     3 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  { /*     4 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  { /*     5 */ COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u }   /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element       Description
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TimePeriod        Referable Keys */
  { /*     0 */         0u },  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  { /*     1 */        10u }   /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element           Description
  InitMode          Initial transmission mode selector of the Tx I-PDU.
  TxModeFalseIdx    the index of the 1:1 relation pointing to Com_TxModeFalse
  TxModeTrueIdx     the index of the 1:1 relation pointing to Com_TxModeTrue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitMode  TxModeFalseIdx  TxModeTrueIdx        Referable Keys */
  { /*     0 */     TRUE,             1u,            0u },  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  { /*     1 */     TRUE,             0u,            0u },  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  { /*     2 */     TRUE,             1u,            0u },  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  { /*     3 */     TRUE,             0u,            0u },  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  { /*     4 */     TRUE,             1u,            0u }   /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element     Description
  Periodic    TRUE if transmission mode contains a cyclic part.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Periodic        Referable Keys */
  { /*     0 */     TRUE }   /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Tx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduGrpInfoType, COM_CONST) Com_TxPduGrpInfo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   0u },
  { /*     1 */                   0u },
  { /*     2 */                   0u },
  { /*     3 */                   0u },
  { /*     4 */                   0u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                   Description
  TxPduInitValueUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  TxBufferLength            the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx      the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx    the start index of the 0:n relation pointing to Com_TxPduInitValue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduInitValueUsed  TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx        Referable Keys */
  { /*     0 */               TRUE,             8u,                   8u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  { /*     1 */               TRUE,             8u,                  16u,                     8u },  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  { /*     2 */               TRUE,             8u,                  24u,                    16u },  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  { /*     3 */               TRUE,             8u,                  32u,                    24u },  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  { /*     4 */               TRUE,             8u,                  40u,                    32u }   /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[40] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     1 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     2 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     3 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     4 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     5 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     6 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     7 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     8 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*     9 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    10 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    11 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    12 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    13 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    14 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    15 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    16 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    17 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    18 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    19 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    20 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    21 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    22 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    23 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    24 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    25 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    26 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    27 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    28 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    29 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    30 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    31 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    32 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*    33 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*    34 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*    35 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*    36 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*    37 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*    38 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*    39 */           0x00u   /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element             Description
  BitLength           Bit length of the signal or group signal.
  BitPosition         Little endian bit position of the signal or group signal within the I-PDU.
  ByteLength          Byte length of the signal or group signal.
  BytePosition        Little endian byte position of the signal or group signal within the I-PDU.
  TxBufferLength      the number of relations pointing to Com_TxBuffer
  TxBufferStartIdx    the start index of the 0:n relation pointing to Com_TxBuffer
  TxPduInfoIdx        the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    BitLength  BitPosition  ByteLength  BytePosition  TxBufferLength  TxBufferStartIdx  TxPduInfoIdx        Referable Keys */
  { /*     0 */        1u,          0u,         0u,           0u,             1u,               8u,           1u },  /* [/ActiveEcuC/Com/ComConfig/Rear_LeftWindow_oRear_MyECU_oCAN00_0e89810b_Tx, /ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  { /*     1 */        1u,          1u,         0u,           0u,             1u,               8u,           1u },  /* [/ActiveEcuC/Com/ComConfig/Rear_RighttWindow_oRear_MyECU_oCAN00_ce33e81a_Tx, /ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  { /*     2 */        2u,          0u,         0u,           0u,             1u,               0u,           0u },  /* [/ActiveEcuC/Com/ComConfig/lock_status_oLOCK_status_oCAN00_d69a269d_Tx, /ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  { /*     3 */        1u,          0u,         0u,           0u,             1u,              24u,           3u },  /* [/ActiveEcuC/Com/ComConfig/sig_FrongtIntorLight_omsg_Transmit2_oCAN00_db11f0a8_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  { /*     4 */        8u,          0u,         1u,           0u,             1u,              16u,           2u },  /* [/ActiveEcuC/Com/ComConfig/sig_LampCnt_omsg_MyECU_Lamp_oCAN00_f37e68ea_Tx, /ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  { /*     5 */        1u,          0u,         0u,           0u,             1u,              32u,           4u }   /* [/ActiveEcuC/Com/ComConfig/sig_RearInteriorLight_omsg_Transmit_oCAN00_49a633c1_Tx, /ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[3];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_Control_oCAN00_c7f57662_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive2_oCAN00_adb9646b_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Receive_oCAN00_2b456e3f_Rx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Rx_4cbf71f7] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/lock_cmd_oLOCK_Control_oCAN00_cf665a91_Rx, /ActiveEcuC/Com/ComConfig/lock_cmd_oLOCK_Control_oCAN00_cf665a91_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/sig_RearLeftWindowPosition_omsg_Receive2_oCAN00_89d4d489_Rx, /ActiveEcuC/Com/ComConfig/sig_RearLeftWindowPosition_omsg_Receive2_oCAN00_89d4d489_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/sig_RearRightWindowPosition_omsg_Receive2_oCAN00_94575df2_Rx, /ActiveEcuC/Com/ComConfig/sig_RearRightWindowPosition_omsg_Receive2_oCAN00_94575df2_Rx_RxSignalBufferRouting] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearInteriorLight_omsg_Receive_oCAN00_63323183_Rx, /ActiveEcuC/Com/ComConfig/sig_State_RearInteriorLight_omsg_Receive_oCAN00_63323183_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearLeftDoor_omsg_Receive_oCAN00_84ad4140_Rx, /ActiveEcuC/Com/ComConfig/sig_State_RearLeftDoor_omsg_Receive_oCAN00_84ad4140_Rx_RxSignalBufferRouting] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/sig_State_RearRightDoor_omsg_Receive_oCAN00_a8945098_Rx, /ActiveEcuC/Com/ComConfig/sig_State_RearRightDoor_omsg_Receive_oCAN00_a8945098_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[40];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/lock_status_oLOCK_status_oCAN00_d69a269d_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/Rear_LeftWindow_oRear_MyECU_oCAN00_0e89810b_Tx, /ActiveEcuC/Com/ComConfig/Rear_RighttWindow_oRear_MyECU_oCAN00_ce33e81a_Tx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/sig_LampCnt_omsg_MyECU_Lamp_oCAN00_f37e68ea_Tx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/sig_FrongtIntorLight_omsg_Transmit2_oCAN00_db11f0a8_Tx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/sig_RearInteriorLight_omsg_Transmit_oCAN00_49a633c1_Tx] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/LOCK_status_oCAN00_02e31e72_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Rear_MyECU_oCAN00_ca7e15e0_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_Lamp_oCAN00_818e1651_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit2_oCAN00_97205322_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_Transmit_oCAN00_0723e95e_Tx, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_1ae5d671] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/






/**********************************************************************************************************************
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

