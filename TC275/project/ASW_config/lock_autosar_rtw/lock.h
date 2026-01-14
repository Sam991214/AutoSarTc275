/*
 * File: lock.h
 *
 * Code generated for Simulink model 'lock'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Oct 18 09:36:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_lock_h_
#define RTW_HEADER_lock_h_
#ifndef lock_COMMON_INCLUDES_
#define lock_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_lock.h"
#endif                                 /* lock_COMMON_INCLUDES_ */

#include "lock_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  uint8 is_c36_lock;                   /* '<S1>/CentralLockChart' */
  uint8 is_active_c36_lock;            /* '<S1>/CentralLockChart' */
} ARID_DEF_lock_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_lock_T lock_ARID_DEF;  /* '<S1>/CentralLockChart' */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'lock'
 * '<S1>'   : 'lock/Runnable_sys'
 * '<S2>'   : 'lock/lock_Init'
 * '<S3>'   : 'lock/Runnable_sys/CentralLockChart'
 */
#endif                                 /* RTW_HEADER_lock_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
