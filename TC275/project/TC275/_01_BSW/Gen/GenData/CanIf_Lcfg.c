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
 *            Module: CanIf
 *           Program: MSR_Vector_SLP4
 *          Customer: China FAW Group Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC297TA
 *    License Scope : The usage is restricted to CBD1600956_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Lcfg.c
 *   Generation Time: 2024-10-18 19:02:58
 *           Project: TC27x - Version 1.0
 *          Delivery: CBD1600956_D01
 *      Tool Version: DaVinci Configurator  5.20.35
 *
 *
 *********************************************************************************************************************/

#define CANIF_LCFG_SOURCE

/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/ 

#include "CanIf_Cfg.h"

 /*  CanNm Header Files  */ 
#include "CanNm_Cfg.h"
#include "CanNm_Cbk.h"
 /*  PduR Header Files  */ 
#include "PduR_Cfg.h"
#include "PduR_CanIf.h"
 /*  CanSM Header Files  */ 
#include "CanSM_Cbk.h"

#define CANIF_START_SEC_APPL_CODE

#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

/**********************************************************************************************************************
  \var  Prototypes of callback functions
**********************************************************************************************************************/

/** 
  \brief  Tx confirmation functions.
*/



/** 
  \brief  Rx indication functions.
*/





#define CANIF_STOP_SEC_APPL_CODE

#include "MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
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
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr = CanSM_ControllerBusOff;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MappedTxBuffersConfigEndIdx                                                                      MappedTxBuffersConfigStartIdx                                                                            Referable Keys */
  { /*     0 */                          1u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,                            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */ }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr = CanSM_ControllerModeIndication;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdByteQueueConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CtrlStatesIdx                                                                      PduIdFirst                           PduIdLast                           TxBufferCfgIdx                                                                                  TxBufferHandlingType                     MailBoxType                    Referable Keys */
  { /*     0 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,         0u  /* Unused, TxPduId 5 */,        0u  /* Unused, TxPduId 5 */, CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex0 */                                    , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_TxFullCANMailbox  },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_msg_nm_TX_MyECU_oCAN00_720bbb34_Tx] */
  { /*     1 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,         0u  /* Unused, TxPduId 0 */,        0u  /* Unused, TxPduId 4 */,                                     0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX */, CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID, CANIF_TxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX] */
  { /*     2 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,         0u  /* RxPduId */          ,        4u  /* RxPduId  */         , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex2 */                                    , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_RxBasicCANMailbox },  /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_APP_RX] */
  { /*     3 */            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,         0u  /* Unused object */    ,        0u  /* Unused object */    , CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG  /* unusedIndex3 */                                    , CANIF_TXBUFFER_HANDLINGTYPE_NONE       , CANIF_UnusedCANMailbox  }   /* [/ActiveEcuC/Can/CanConfigSet/CanHardwareObject_RX] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MailBoxConfigIdx                                                                 Referable Keys */
  { /*     0 */               1u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX */ }   /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxIndicationFct                                           RxIndicationLayout                                                                 Referable Keys */
  { /*     0 */  { (CanIf_SimpleRxIndicationFctType)NULL_PTR }          , CanIf_SimpleRxIndicationLayout    /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ },  /* [NULL_PTR] */
  { /*     1 */  { (CanIf_SimpleRxIndicationFctType)CanNm_RxIndication }, CanIf_AdvancedRxIndicationLayout  /* PRQA S 0313 */ /* MD_CanIf_Rule11.1 */ }   /* [CanNm_RxIndication] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfig
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  RxPduCanId                Rx-PDU: CAN identifier.
  RxPduMask                 Rx-PDU: CAN identifier mask.
  UpperPduId                PDU ID defined by upper layer.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  RxPduDlc                  Rx-PDU length (DLC).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfig[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPduCanId                                                           RxPduMask                                           UpperPduId                               RxIndicationFctListIdx                            RxPduDlc                                    Comment                                                            Referable Keys */
  { /*     0 */    0x0600u  /* msg_nm_MyECU_oCAN00_dfbc2140_Rx, 2.0- or FD-PDU */  ,   0x47FFu  /* msg_nm_MyECU_oCAN00_dfbc2140_Rx */  , CanNmConf_CanNmRxPdu_CanNmRxPdu        ,                     1u  /* CanNm_RxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: msg_nm_MyECU_oCAN00_dfbc2140_Rx, CanId: 0x600]   */  /* [CanIfConf_CanIfRxPduCfg_msg_nm_MyECU_oCAN00_dfbc2140_Rx] */
  { /*     1 */    0x0401u  /* msg_nm_RearECU_oCAN00_108e14bb_Rx, 2.0- or FD-PDU */,   0x07FFu  /* msg_nm_RearECU_oCAN00_108e14bb_Rx */, CanNmConf_CanNmRxPdu_CanNmRxPdu        ,                     1u  /* CanNm_RxIndication */,       8u  /* DLC-Check is enabled */ },  /* [PDU: msg_nm_RearECU_oCAN00_108e14bb_Rx, CanId: 0x401] */  /* [CanIfConf_CanIfRxPduCfg_msg_nm_RearECU_oCAN00_108e14bb_Rx] */
  { /*     2 */    0x0230u  /* LOCK_Control_oCAN00_8a3e41f4_Rx, 2.0- or FD-PDU */  ,   0x07FFu  /* LOCK_Control_oCAN00_8a3e41f4_Rx */  , PduRConf_PduRSrcPdu_PduRSrcPdu_f15cfd04,                     0u  /* NULL_PTR */          ,       1u  /* DLC-Check is enabled */ },  /* [PDU: LOCK_Control_oCAN00_8a3e41f4_Rx, CanId: 0x230]   */  /* [CanIfConf_CanIfRxPduCfg_LOCK_Control_oCAN00_8a3e41f4_Rx] */
  { /*     3 */    0x0220u  /* msg_Receive2_oCAN00_d580e241_Rx, 2.0- or FD-PDU */  ,   0x07FFu  /* msg_Receive2_oCAN00_d580e241_Rx */  , PduRConf_PduRSrcPdu_PduRSrcPdu_7b8aca19,                     0u  /* NULL_PTR */          ,       8u  /* DLC-Check is enabled */ },  /* [PDU: msg_Receive2_oCAN00_d580e241_Rx, CanId: 0x220]   */  /* [CanIfConf_CanIfRxPduCfg_msg_Receive2_oCAN00_d580e241_Rx] */
  { /*     4 */    0x0210u  /* msg_Receive_oCAN00_76f25845_Rx, 2.0- or FD-PDU */   ,   0x07FFu  /* msg_Receive_oCAN00_76f25845_Rx */   , PduRConf_PduRSrcPdu_PduRSrcPdu_16740ed0,                     0u  /* NULL_PTR */          ,       8u  /* DLC-Check is enabled */ }   /* [PDU: msg_Receive_oCAN00_76f25845_Rx, CanId: 0x210]    */  /* [CanIfConf_CanIfRxPduCfg_msg_Receive_oCAN00_76f25845_Rx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueConfig
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE
  \details
  Element                                             Description
  TxBufferPrioByCanIdBaseIdx                          the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase
  TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx      the end index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusLength      the number of relations pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx    the start index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueConfigType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxBufferPrioByCanIdBaseIdx                                                          TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx                                                          TxBufferPrioByCanIdByteQueueMappedTxPdusLength                                                          TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx                                                                Referable Keys */
  { /*     0 */                         0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX */,                                             5u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX */,                                             5u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX */,                                               0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX */ }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE: Mapped Tx-PDUs
  \details
  Element           Description
  TxPduConfigIdx    the index of the 1:1 relation pointing to CanIf_TxPduConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduConfigIdx                                                                                Referable Keys */
  { /*     0 */             0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_MyECU_Lamp_oCAN00_41befc25_Tx */ },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX] */
  { /*     1 */             1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit2_oCAN00_ca9f319c_Tx */  },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX] */
  { /*     2 */             2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Rear_MyECU_oCAN00_8f6ea3fe_Tx */     },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX] */
  { /*     3 */             3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/LOCK_status_oCAN00_59bc3f35_Tx */    },  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX] */
  { /*     4 */             4u  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit_oCAN00_29db34a4_Tx */   }   /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxConfirmationFctList                      Referable Keys */
  /*     0 */ (CanIf_TxConfirmationFctType)NULL_PTR ,  /* [NULL_PTR] */
  /*     1 */ CanNm_TxConfirmation                  ,  /* [CanNm_TxConfirmation] */
  /*     2 */ PduR_CanIfTxConfirmation                 /* [PduR_CanIfTxConfirmation] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfig
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle ID (8bit / 16bit).
  IsTxPduTruncation           TRUE: Truncation of Tx-PDU is enabled, FALSE: Truncation of Tx-PDU is disabled
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
  TxPduLength                 Tx-PDU length.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfig[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CanId    UpperLayerTxPduId                                       IsTxPduTruncation  CtrlStatesIdx                                                                      MailBoxConfigIdx                                                                                           TxConfirmationFctListIdx                                  TxPduLength        Comment                                               Referable Keys */
  { /*     0 */ 0x0511u, PduRConf_PduRDestPdu_msg_MyECU_Lamp_oCAN00_26f3473b_Tx, TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX */                                ,                       2u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: msg_MyECU_Lamp_oCAN00_41befc25_Tx]  */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_MyECU_Lamp_oCAN00_41befc25_Tx] */
  { /*     1 */ 0x0310u, PduRConf_PduRDestPdu_msg_Transmit2_oCAN00_fe1f443c_Tx , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX */                                ,                       2u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: msg_Transmit2_oCAN00_ca9f319c_Tx]   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit2_oCAN00_ca9f319c_Tx] */
  { /*     2 */ 0x0305u, PduRConf_PduRDestPdu_Rear_MyECU_oCAN00_3a26a20f_Tx    , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX */                                ,                       2u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: Rear_MyECU_oCAN00_8f6ea3fe_Tx]      */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Rear_MyECU_oCAN00_8f6ea3fe_Tx] */
  { /*     3 */ 0x0231u, PduRConf_PduRDestPdu_LOCK_status_oCAN00_d2940ada_Tx   , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX */                                ,                       2u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: LOCK_status_oCAN00_59bc3f35_Tx]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/LOCK_status_oCAN00_59bc3f35_Tx] */
  { /*     4 */ 0x0200u, PduRConf_PduRDestPdu_msg_Transmit_oCAN00_9631a86b_Tx  , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,               1u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_TX */                                ,                       2u  /* PduR_CanIfTxConfirmation */,          8u },  /* [PDU: msg_Transmit_oCAN00_29db34a4_Tx]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit_oCAN00_29db34a4_Tx] */
  { /*     5 */ 0x0601u, CanNmConf_CanNmTxPdu_CanNmTxPdu                       , TRUE             ,            0u  /* /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959 */,               0u  /* /ActiveEcuC/Can/CanConfigSet/CanHardwareObject_msg_nm_TX_MyECU_oCAN00_720bbb34_Tx */,                       1u  /* CanNm_TxConfirmation */    ,          8u }   /* [PDU: msg_nm_TX_MyECU_oCAN00_720bbb34_Tx] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_nm_TX_MyECU_oCAN00_720bbb34_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduQueueIndex
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduQueueIndex
  \brief  Indirection table: Tx-PDU handle ID to corresponding Tx buffer handle ID. NOTE: Only BasicCAN Tx-PDUs have a valid indirection into the Tx buffer.
  \details
  Element       Description
  TxQueueIdx    the index of the 0:1 relation pointing to CanIf_TxQueue
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_TxPduQueueIndexType, CANIF_CONST) CanIf_TxPduQueueIndex[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxQueueIdx                                                                                                           Comment                                                                        Referable Keys */
  { /*     0 */                                   0u  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_MyECU_Lamp_oCAN00_41befc25_Tx */  },  /* [msg_MyECU_Lamp_oCAN00_41befc25_Tx, BasicCAN TxPdu with Tx-buffer] */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_MyECU_Lamp_oCAN00_41befc25_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959] */
  { /*     1 */                                   1u  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit2_oCAN00_ca9f319c_Tx */   },  /* [msg_Transmit2_oCAN00_ca9f319c_Tx, BasicCAN TxPdu with Tx-buffer]  */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit2_oCAN00_ca9f319c_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959] */
  { /*     2 */                                   2u  /* /ActiveEcuC/CanIf/CanIfInitCfg/Rear_MyECU_oCAN00_8f6ea3fe_Tx */      },  /* [Rear_MyECU_oCAN00_8f6ea3fe_Tx, BasicCAN TxPdu with Tx-buffer]     */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Rear_MyECU_oCAN00_8f6ea3fe_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959] */
  { /*     3 */                                   3u  /* /ActiveEcuC/CanIf/CanIfInitCfg/LOCK_status_oCAN00_59bc3f35_Tx */     },  /* [LOCK_status_oCAN00_59bc3f35_Tx, BasicCAN TxPdu with Tx-buffer]    */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/LOCK_status_oCAN00_59bc3f35_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959] */
  { /*     4 */                                   4u  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit_oCAN00_29db34a4_Tx */    },  /* [msg_Transmit_oCAN00_29db34a4_Tx, BasicCAN TxPdu with Tx-buffer]   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit_oCAN00_29db34a4_Tx, /ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959] */
  { /*     5 */ CANIF_NO_TXQUEUEIDXOFTXPDUQUEUEINDEX  /* /ActiveEcuC/CanIf/CanIfInitCfg/msg_nm_TX_MyECU_oCAN00_720bbb34_Tx */ }   /* [msg_nm_TX_MyECU_oCAN00_720bbb34_Tx, FullCAN TxPdu NO Tx-buffer]   */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_nm_TX_MyECU_oCAN00_720bbb34_Tx] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_WakeUpConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_WakeUpConfig
  \brief  Wake-up source configuration
  \details
  Element                Description
  Controller             CAN controller handle ID
  WakeUpSource           Wake-up source identifier
  WakeUpTargetAddress    Logical handle ID of target (CAN controller / transceiver)
  WakeUpTargetModule     Target for wake-up source: CAN controller / transceiver
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanIf_WakeUpConfigType, CANIF_CONST) CanIf_WakeUpConfig[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Controller               WakeUpSource                              WakeUpTargetAddress               WakeUpTargetModule              Comment */
  { /*     0 */      0xFFu  /* Dummy */,           0u  /* Dummy wake-up source */,               0xFFu  /* Dummy */, CANIF_WAKEUPREQUEST_NONE }   /* [Dummy Wake-up source entry] */
};
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element     Description
  CtrlMode    Controller mode.
  PduMode     PDU mode state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfCtrlDrvCfg_7d254554/CT_CAN00_9df8a959] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBase
  \brief  Variable declaration - Tx-buffer: PRIO_BY_CANID as byte/bit-queue. Stores at least the QueueCounter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxBufferPrioByCanIdBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBase;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/CanIfBufferCfg_TX] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueue
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueue
  \brief  Variable declaration - Tx byte queue.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanIf_TxQueueUType, CANIF_VAR_NOINIT) CanIf_TxQueue;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_MyECU_Lamp_oCAN00_41befc25_Tx] */
  /*     1 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit2_oCAN00_ca9f319c_Tx] */
  /*     2 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/Rear_MyECU_oCAN00_8f6ea3fe_Tx] */
  /*     3 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/LOCK_status_oCAN00_59bc3f35_Tx] */
  /*     4 */  /* [/ActiveEcuC/CanIf/CanIfInitCfg/msg_Transmit_oCAN00_29db34a4_Tx] */

#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



