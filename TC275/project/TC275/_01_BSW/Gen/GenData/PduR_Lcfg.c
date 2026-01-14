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
 *            Module: PduR
 *           Program: MSR_Vector_SLP4
 *          Customer: China FAW Group Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC297TA
 *    License Scope : The usage is restricted to CBD1600956_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Lcfg.c
 *   Generation Time: 2024-10-16 11:34:52
 *           Project: TC27x - Version 1.0
 *          Delivery: CBD1600956_D01
 *      Tool Version: DaVinci Configurator  5.20.35
 *
 *
 *********************************************************************************************************************/

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"
#include "PduR_Fm.h"
#include "PduR_IFQ.h"
#include "PduR_Sm.h"
#include "PduR_RmIf.h"
#include "PduR_RmTp.h"
#include "PduR_RmTp_TxInst.h"
#include "SchM_PduR.h"
#if(PDUR_DEV_ERROR_REPORT == STD_ON)
# include "Det.h"
#endif

/* Include headers with callbacks */
#include "PduR_CanIf.h"
#include "PduR_Com.h"


/**********************************************************************************************************************
 * LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/* Exclusive Area Wrapper functions */
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void);
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void);
  
/**********************************************************************************************************************
 * LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA
 *********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  PduR_ExclusiveAreaRom
**********************************************************************************************************************/
/** 
  \var    PduR_ExclusiveAreaRom
  \brief  PduR Exclusive Area Locks
  \details
  Element    Description
  Lock       Lock function
  Unlock     Unlock function
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_ExclusiveAreaRomType, PDUR_CONST) PduR_ExclusiveAreaRom[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Lock                                        Unlock                                           Referable Keys */
  { /*     0 */ PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0, PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0 }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRLock_PduRExclusiveArea] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_MmRom
**********************************************************************************************************************/
/** 
  \var    PduR_MmRom
  \brief  Module manager: Contains all function pointers of the bordering modules.
  \details
  Element                         Description
  DestApplicationManagerRomIdx    the index of the 1:1 relation pointing to PduR_DestApplicationManagerRom
  MaskedBits                      contains bitcoded the boolean data of PduR_LoIfOfMmRom, PduR_RmGDestRomUsedOfMmRom, PduR_UpIfOfMmRom
  RmGDestRomEndIdx                the end index of the 0:n relation pointing to PduR_RmGDestRom
  RmGDestRomStartIdx              the start index of the 0:n relation pointing to PduR_RmGDestRom
  UpIfRxIndicationFctPtr          Upper layer communication interface Rx indication function pointers.
  UpIfTxConfirmationFctPtr        Upper layer communication interface Tx confimation function pointers
  LoIfTransmitFctPtr              Lower layer If transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_MmRomType, PDUR_CONST) PduR_MmRom[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestApplicationManagerRomIdx  MaskedBits  RmGDestRomEndIdx  RmGDestRomStartIdx  UpIfRxIndicationFctPtr  UpIfTxConfirmationFctPtr  LoIfTransmitFctPtr        Comment                        Referable Keys */
  { /*     0 */                           0u,      0x06u,               5u,                 0u, NULL_PTR              , NULL_PTR                , CanIf_Transmit     },  /* [BswModule: CanIf] */  /* [/ActiveEcuC/PduR/CanIf, /ActiveEcuC/PduR] */
  { /*     1 */                           0u,      0x03u,               8u,                 5u, Com_RxIndication      , Com_TxConfirmation      , NULL_PTR           }   /* [BswModule: com]   */  /* [/ActiveEcuC/PduR/com, /ActiveEcuC/PduR] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmDestRom
  \brief  PduR RoutiongPathManager destPdu Table
  \details
  Element          Description
  RmGDestRomIdx    the index of the 1:1 relation pointing to PduR_RmGDestRom
  RmSrcRomIdx      the index of the 1:1 relation pointing to PduR_RmSrcRom
  RoutingType      Type of the Routing (API Forwarding, Gateway).
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmDestRomType, PDUR_CONST) PduR_RmDestRom[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmGDestRomIdx  RmSrcRomIdx  RoutingType                                                 Comment                                                                Referable Keys */
  { /*     0 */            2u,          6u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_Transmit2_oCAN00_fe1f443c_Tx]            */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Transmit2_oCAN00_97205322_Tx/PduRSrcPdu_04f59ecb, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Transmit2_oCAN00_97205322_Tx/msg_Transmit2_oCAN00_fe1f443c_Tx] */
  { /*     1 */            1u,          7u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_Transmit_oCAN00_9631a86b_Tx]             */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Transmit_oCAN00_0723e95e_Tx/PduRSrcPdu_087fd70d, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Transmit_oCAN00_0723e95e_Tx/msg_Transmit_oCAN00_9631a86b_Tx] */
  { /*     2 */            6u,          2u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_Receive_oCAN00_3867e0b8_Rx_16740ed0_Rx]  */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Receive_oCAN00_3867e0b8_Rx/PduRSrcPdu_16740ed0, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Receive_oCAN00_3867e0b8_Rx/msg_Receive_oCAN00_3867e0b8_Rx_16740ed0_Rx] */
  { /*     3 */            0u,          4u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: Rear_MyECU_oCAN00_3a26a20f_Tx]               */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Rear_MyECU_oCAN00_ca7e15e0_Tx/PduRSrcPdu_4f11700f, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Rear_MyECU_oCAN00_ca7e15e0_Tx/Rear_MyECU_oCAN00_3a26a20f_Tx] */
  { /*     4 */            7u,          1u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_Receive2_oCAN00_e16b911a_Rx_7b8aca19_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Receive2_oCAN00_e16b911a_Rx/PduRSrcPdu_7b8aca19, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Receive2_oCAN00_e16b911a_Rx/msg_Receive2_oCAN00_e16b911a_Rx_7b8aca19_Rx] */
  { /*     5 */            3u,          5u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: msg_MyECU_Lamp_oCAN00_26f3473b_Tx]           */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_MyECU_Lamp_oCAN00_818e1651_Tx/PduRSrcPdu_8e8b997f, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_MyECU_Lamp_oCAN00_818e1651_Tx/msg_MyECU_Lamp_oCAN00_26f3473b_Tx] */
  { /*     6 */            4u,          3u, PDUR_IF_UNBUFFERED_TX_API_FWD_ROUTINGTYPEOFRMDESTROM },  /* [PduRDestPdu: LOCK_status_oCAN00_d2940ada_Tx]              */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/LOCK_status_oCAN00_02e31e72_Tx/PduRSrcPdu_cf16726b, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/LOCK_status_oCAN00_02e31e72_Tx/LOCK_status_oCAN00_d2940ada_Tx] */
  { /*     7 */            5u,          0u, PDUR_IF_UNBUFFERED_RX_API_FWD_ROUTINGTYPEOFRMDESTROM }   /* [PduRDestPdu: LOCK_Control_oCAN00_f597d28d_Rx_f15cfd04_Rx] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/LOCK_Control_oCAN00_f597d28d_Rx/PduRSrcPdu_f15cfd04, /ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/LOCK_Control_oCAN00_f597d28d_Rx/LOCK_Control_oCAN00_f597d28d_Rx_f15cfd04_Rx] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmGDestRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmGDestRom
  \brief  PduR RoutiongPathManager global destPdu Table
  \details
  Element                  Description
  DestHnd                  handle to be used as parameter for the StartOfReception, CopyRxData, Transmit or RxIndication function call.
  Direction                Direction of this Pdu: Rx or Tx
  MmRomIdx                 the index of the 1:1 relation pointing to PduR_MmRom
  PduRDestPduProcessing    Is Processing Type of destination PDU.
  RmDestRomIdx             the index of the 1:1 relation pointing to PduR_RmDestRom
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmGDestRomType, PDUR_CONST) PduR_RmGDestRom[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DestHnd                                                    Direction                      MmRomIdx  PduRDestPduProcessing                             RmDestRomIdx        Comment                                                  Referable Keys */
  { /*     0 */     CanIfConf_CanIfTxPduCfg_Rear_MyECU_oCAN00_8f6ea3fe_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           3u },  /* [Globale PduRDestPdu: PDUR2CanIf_Rearmyecu]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_Rearmyecu, /ActiveEcuC/PduR/CanIf] */
  { /*     1 */   CanIfConf_CanIfTxPduCfg_msg_Transmit_oCAN00_29db34a4_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           1u },  /* [Globale PduRDestPdu: PDUR2CanIf_Transmit]   */  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_Transmit, /ActiveEcuC/PduR/CanIf] */
  { /*     2 */  CanIfConf_CanIfTxPduCfg_msg_Transmit2_oCAN00_ca9f319c_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           0u },  /* [Globale PduRDestPdu: PDUR2CanIf_Transmit2]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_Transmit2, /ActiveEcuC/PduR/CanIf] */
  { /*     3 */ CanIfConf_CanIfTxPduCfg_msg_MyECU_Lamp_oCAN00_41befc25_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           5u },  /* [Globale PduRDestPdu: PDUR2CanIf_lamp]       */  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_lamp, /ActiveEcuC/PduR/CanIf] */
  { /*     4 */    CanIfConf_CanIfTxPduCfg_LOCK_status_oCAN00_59bc3f35_Tx, PDUR_TX_DIRECTIONOFRMGDESTROM,       0u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           6u },  /* [Globale PduRDestPdu: PDUR2CanIf_lockstatus] */  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_lockstatus, /ActiveEcuC/PduR/CanIf] */
  { /*     5 */           ComConf_ComIPdu_LOCK_Control_oCAN00_c7f57662_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       1u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           7u },  /* [Globale PduRDestPdu: PDUR2COM_lockcontrol]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2COM_lockcontrol, /ActiveEcuC/PduR/com] */
  { /*     6 */            ComConf_ComIPdu_msg_Receive_oCAN00_2b456e3f_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       1u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           2u },  /* [Globale PduRDestPdu: PDUR2COM_msg_receive]  */  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2COM_msg_receive, /ActiveEcuC/PduR/com] */
  { /*     7 */           ComConf_ComIPdu_msg_Receive2_oCAN00_adb9646b_Rx, PDUR_RX_DIRECTIONOFRMGDESTROM,       1u, PDUR_IMMEDIATE_PDURDESTPDUPROCESSINGOFRMGDESTROM,           4u }   /* [Globale PduRDestPdu: PDUR2COM_msg_receive2] */  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2COM_msg_receive2, /ActiveEcuC/PduR/com] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmSrcRom
**********************************************************************************************************************/
/** 
  \var    PduR_RmSrcRom
  \brief  PduR RoutiongManager SrcPdu Table
  \details
  Element              Description
  MmRomIdx             the index of the 1:1 relation pointing to PduR_MmRom
  RmDestRomLength      the number of relations pointing to PduR_RmDestRom
  RmDestRomStartIdx    the start index of the 1:n relation pointing to PduR_RmDestRom
  SrcHnd               handle to be used as parameter for the TxConfirmation or TriggerTransmit function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmSrcRomType, PDUR_CONST) PduR_RmSrcRom[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MmRomIdx  RmDestRomLength  RmDestRomStartIdx  SrcHnd                                                   Comment                                       Referable Keys */
  { /*     0 */       0u,              1u,                7u,                          PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_f15cfd04] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/LOCK_Control_oCAN00_f597d28d_Rx/PduRSrcPdu_f15cfd04] */
  { /*     1 */       0u,              1u,                4u,                          PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_7b8aca19] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Receive2_oCAN00_e16b911a_Rx/PduRSrcPdu_7b8aca19] */
  { /*     2 */       0u,              1u,                2u,                          PDUR_NO_SRCHNDOFRMSRCROM },  /* [PduRSrcPdu: PduRSrcPdu_16740ed0] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Receive_oCAN00_3867e0b8_Rx/PduRSrcPdu_16740ed0] */
  { /*     3 */       1u,              1u,                6u,    ComConf_ComIPdu_LOCK_status_oCAN00_02e31e72_Tx },  /* [PduRSrcPdu: PduRSrcPdu_cf16726b] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/LOCK_status_oCAN00_02e31e72_Tx/PduRSrcPdu_cf16726b] */
  { /*     4 */       1u,              1u,                3u,     ComConf_ComIPdu_Rear_MyECU_oCAN00_ca7e15e0_Tx },  /* [PduRSrcPdu: PduRSrcPdu_4f11700f] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Rear_MyECU_oCAN00_ca7e15e0_Tx/PduRSrcPdu_4f11700f] */
  { /*     5 */       1u,              1u,                5u, ComConf_ComIPdu_msg_MyECU_Lamp_oCAN00_818e1651_Tx },  /* [PduRSrcPdu: PduRSrcPdu_8e8b997f] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_MyECU_Lamp_oCAN00_818e1651_Tx/PduRSrcPdu_8e8b997f] */
  { /*     6 */       1u,              1u,                0u,  ComConf_ComIPdu_msg_Transmit2_oCAN00_97205322_Tx },  /* [PduRSrcPdu: PduRSrcPdu_04f59ecb] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Transmit2_oCAN00_97205322_Tx/PduRSrcPdu_04f59ecb] */
  { /*     7 */       1u,              1u,                1u,   ComConf_ComIPdu_msg_Transmit_oCAN00_0723e95e_Tx }   /* [PduRSrcPdu: PduRSrcPdu_087fd70d] */  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Transmit_oCAN00_0723e95e_Tx/PduRSrcPdu_087fd70d] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RmTransmitFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_RmTransmitFctPtr
  \brief  Internal routing manager Transmit functions.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_RmTransmitFctPtrType, PDUR_CONST) PduR_RmTransmitFctPtr[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RmTransmitFctPtr        Referable Keys */
  /*     0 */ PduR_RmIf_RoutePdu    /* [PduR_RmIf_RoutePdu] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Tx2Lo
**********************************************************************************************************************/
/** 
  \var    PduR_Tx2Lo
  \brief  Contains all informations to route a Pdu from a upper layer to a lower layer module, or to cancel a transmission
  \details
  Element                Description
  RmTransmitFctPtrIdx    the index of the 1:1 relation pointing to PduR_RmTransmitFctPtr
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RmTransmitFctPtrIdx        Referable Keys */
  { /*     0 */                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/LOCK_status_oCAN00_02e31e72_Tx/PduRSrcPdu_cf16726b] */
  { /*     1 */                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Rear_MyECU_oCAN00_ca7e15e0_Tx/PduRSrcPdu_4f11700f] */
  { /*     2 */                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_MyECU_Lamp_oCAN00_818e1651_Tx/PduRSrcPdu_8e8b997f] */
  { /*     3 */                  0u },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Transmit2_oCAN00_97205322_Tx/PduRSrcPdu_04f59ecb] */
  { /*     4 */                  0u }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/msg_Transmit_oCAN00_0723e95e_Tx/PduRSrcPdu_087fd70d] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TxIf2Up
**********************************************************************************************************************/
/** 
  \var    PduR_TxIf2Up
  \brief  This table contains all routing information to perform the Tx handling of an interface routing. Used in the &lt;LLIf&gt;_TriggerTransmit and &lt;LLIf&gt;_TxConfirmation
  \details
  Element               Description
  TxConfirmationUsed    True, if any of the source PduRDestPdus uses a TxConfirmation.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(PduR_TxIf2UpType, PDUR_CONST) PduR_TxIf2Up[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxConfirmationUsed        Referable Keys */
  { /*     0 */               TRUE },  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_Rearmyecu] */
  { /*     1 */               TRUE },  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_Transmit] */
  { /*     2 */               TRUE },  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_Transmit2] */
  { /*     3 */               TRUE },  /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_lamp] */
  { /*     4 */               TRUE }   /* [/ActiveEcuC/EcuC/EcucPduCollection_001/PDUR2CanIf_lockstatus] */
};
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Initialized
**********************************************************************************************************************/
/** 
  \var    PduR_Initialized
  \brief  Initialization state of PduR. TRUE, if PduR_Init() has been called, else FALSE
*/ 
#define PDUR_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


#define PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */

#if(PDUR_USE_INIT_POINTER == STD_ON)
P2CONST(PduR_PBConfigType, PDUR_VAR_ZERO_INIT, PDUR_PBCFG) PduR_ConfigDataPtr = (const PduR_PBConfigType *) NULL_PTR;
#endif

#define PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */
  
/**********************************************************************************************************************
 * LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "MemMap.h"

/* Exclusive Area Wrapper functions */

/**********************************************************************************************************************
 * PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  enter the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/**********************************************************************************************************************
 * PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0
 *********************************************************************************************************************/
/*!
 * \internal
 * -  exit the EA  
 * \endinternal
 *********************************************************************************************************************/
static FUNC(void, PDUR_CODE) PduR_SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0(void)
{
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();
}


/* Upper Layer Interface APIs */

/**********************************************************************************************************************
 * PduR_ComTransmit
 *********************************************************************************************************************/
/*!
 * \internal
 * - call upper layer Transmit function. 
 * \endinternal
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
  Std_ReturnType retVal = E_NOT_OK;        /* PRQA S 2981 */ /* MD_MSR_RetVal */
  
#if (PDUR_TX2LO == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  retVal = PduR_UpTransmit(id, info); /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_TX, PDUR_E_PDU_ID_INVALID);
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */

  return retVal;
}


/* Communication Interface APIs */

/**********************************************************************************************************************
 * PduR_CanIfRxIndication
 *********************************************************************************************************************/
/*!
 * \internal
 * -  call internal general IfRxIndication function.  
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_RXIF2DEST == STD_ON) /* COV_PDUR_RX_OR_TX_ONLY_CONFIG */
  PduR_LoIfRxIndication(RxPduId, info);  /* SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY */
#else
  PduR_Det_ReportError(PDUR_FCT_IFRXIND, PDUR_E_PDU_ID_INVALID);
#endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   		/* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}


/**********************************************************************************************************************
 * PduR_CanIfTxConfirmation
 *********************************************************************************************************************/
/*!
 * \internal
 * - call internal general communication interface TxConfirmation function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfTxConfirmation(PduIdType TxPduId) /* COV_PDUR_WRAPPER_FUNC */
{
#if (PDUR_TXCONFIRMATIONUSEDOFTXIF2UP == STD_ON)
  PduR_LoIfTxConfirmation(TxPduId);
#endif
  PDUR_DUMMY_STATEMENT(TxPduId);        /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /* lint -e{438} */
}




/* Transport Protocol APIs */

/* CancelReceive global without UseTag API */

/* ChangeParameter global without UseTag  API */

/* Communication Interface / Transport Protocol APIs */

/* Communication Interface / Transport Protocol APIs */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
#include "MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_AND_PTR
    \DESCRIPTION    The API is called with an Id and a pointer.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \N The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       The pointer is provided by the lower layer and is assumed to be valid. It is passed as is to the corresponding function. 

  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ID_ONLY
    \DESCRIPTION    The API is called with an Id.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
                    
    \COUNTERMEASURE \R The function pointer is read using the passed Id (and ComStackLib macros). 
                       The Id is a SNV provided by the lower layer. 
                       It is checked at runtime if it is in the valid range.
                       
  \ID SBSW_PDUR_EXTERNAL_API_CALL_FORWARDING_ONLY
    \DESCRIPTION    The API call is forwarded to an internal function.
    \COUNTERMEASURE \N The parameter are checked in the called function.

 SBSW_JUSTIFICATION_END */
 
 /* COV_JUSTIFICATION_BEGIN
 
  \ID COV_PDUR_WRAPPER_FUNC
    \ACCEPT X
    \REASON Each neighbouring module call the same internal function. The call is covered by an other module. 
    
  \ID COV_PDUR_RX_OR_TX_ONLY_CONFIG
    \ACCEPT TX
    \REASON The API is mandatory if this Bsw module exists. In case of Rx or Tx only configs the API call is not forwarded to the internal function. 
 
 COV_JUSTIFICATION_END */
 

/**********************************************************************************************************************
 * END OF FILE: PduR_Lcfg.c
 *********************************************************************************************************************/

