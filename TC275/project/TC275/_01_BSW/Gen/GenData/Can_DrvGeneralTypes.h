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
 *            Module: Can
 *           Program: MSR_Vector_SLP4
 *          Customer: China FAW Group Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC297TA
 *    License Scope : The usage is restricted to CBD1600956_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_DrvGeneralTypes.h
 *   Generation Time: 2024-10-25 10:27:59
 *           Project: TC27x - Version 1.0
 *          Delivery: CBD1600956_D01
 *      Tool Version: DaVinci Configurator  5.20.35
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * WARNING: This code has been generated with reduced-severity errors. 
 * The created output files contain errors that have been ignored. Usage of the created files can lead to unpredictable behavior of the embedded code.
 * Usage of the created files happens at own risk!
 * 
 * [Warning] CAN02009 - Optimize configuration 
 * - [Reduced Severity due to User-Defined Parameter] CanMultipleBasicCANTxObjects is active but there is no multiple TX BasicCANs used on any controller (amount: 0 or higher than expected).
 * Erroneous configuration elements:
 * /ActiveEcuC/Can/CanGeneral[0:CanMultipleBasicCANTxObjects](value=true) (DefRef: /MICROSAR/Can_TricoreMultican/Can/CanGeneral/CanMultipleBasicCANTxObjects)
 * 
 * [Warning] CAN02009 - Optimize configuration 
 * - [Reduced Severity due to User-Defined Parameter] The feature ( /ActiveEcuC/Can/CanGeneral[0:CanMultiplexedTransmission](value=true)) is active but there is no CanObjectMultiplexedTransmission configured.
 * Erroneous configuration elements:
 * /ActiveEcuC/Can/CanGeneral[0:CanMultiplexedTransmission](value=true) (DefRef: /MICROSAR/Can_TricoreMultican/Can/CanGeneral/CanMultiplexedTransmission)
 *********************************************************************************************************************/
#if !defined(CAN_DRVGENERALTYPES_H)
#define CAN_DRVGENERALTYPES_H

/* -----------------------------------------------------------------------------
    Types
 ----------------------------------------------------------------------------- */

/* CAN416, CAN065_Conf */
typedef VAR(uint16, TYPEDEF) Can_IdType;

/* CAN429 */
typedef VAR(uint8, TYPEDEF) Can_HwHandleType;
typedef VAR(sint16, TYPEDEF) Can_SignedHwHandleType;

typedef P2VAR(uint8, TYPEDEF, CAN_APPL_VAR) Can_SduPtrType;

/* CAN415 */
typedef struct Can_PduTypeTag
{
  Can_IdType id;
  uint8 length;
  Can_SduPtrType sdu;
  PduIdType swPduHandle;
} Can_PduType;

/* CAN417 */
typedef enum {
  CAN_T_START = 0,
  CAN_T_STOP,
  CAN_T_SLEEP,
  CAN_T_WAKEUP
} Can_StateTransitionType;

typedef enum {
  CAN_CS_UNINIT = 0,
  CAN_CS_STARTED = 1,
  CAN_CS_STOPPED = 2,
  CAN_CS_SLEEP = 3
} Can_ControllerStateType;

typedef enum {
  CAN_ERRORSTATE_ACTIVE = 0,
  CAN_ERRORSTATE_PASSIVE,
  CAN_ERRORSTATE_BUSOFF
} Can_ErrorStateType;

/* CAN039 - for CBD compatibility OK is 1 - REQUESTED */
typedef enum {
  CAN_NOT_OK = 0,
  CAN_OK = 1,
  CAN_BUSY = 2
} Can_ReturnType;

/* CAN496 */
typedef struct Can_HwTypeTag
{
  Can_IdType CanId;
  Can_HwHandleType Hoh;
  uint8 ControllerId;
} Can_HwType;


#endif /* CAN_DRVGENERALTYPES_H */
 

