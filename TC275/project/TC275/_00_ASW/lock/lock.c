/*
 * File: lock.c
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

#include "lock.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<S1>/CentralLockChart' */
#define lock_IN_Lock                   ((uint8)1U)
#define lock_IN_LockStsUkwn            ((uint8)2U)
#define lock_IN_SafeLock               ((uint8)3U)
#define lock_IN_Unlock                 ((uint8)4U)

/* PublicStructure Variables for Internal Data */
ARID_DEF_lock_T lock_ARID_DEF;         /* '<S1>/CentralLockChart' */

/* Model step function */
void lock(void)
{
  uint8 rtb_DoorXXLockSts;
  uint8 tmpRead;

  /* Outputs for Atomic SubSystem: '<Root>/Runnable_sys' */
  /* Chart: '<S1>/CentralLockChart' incorporates:
   *  Inport: '<Root>/lock_control_lock_cmd'
   */
  if (lock_ARID_DEF.is_active_c36_lock == 0U) {
    lock_ARID_DEF.is_active_c36_lock = 1U;
    lock_ARID_DEF.is_c36_lock = lock_IN_LockStsUkwn;
    rtb_DoorXXLockSts = 0U;

    /* LockSts2_3.LockSts2_LockStsUkwn */
  } else {
    (void)Rte_Read_lock_control_lock_cmd(&tmpRead);
    switch (lock_ARID_DEF.is_c36_lock) {
     case lock_IN_Lock:
      rtb_DoorXXLockSts = 1U;
      if (tmpRead == 2) {
        lock_ARID_DEF.is_c36_lock = lock_IN_Unlock;
        rtb_DoorXXLockSts = 2U;

        /* LockSts2_3.LockSts2_Unlckd */
      }
      break;

     case lock_IN_LockStsUkwn:
      if (tmpRead == 1) {
        lock_ARID_DEF.is_c36_lock = lock_IN_Lock;
        rtb_DoorXXLockSts = 1U;

        /* LockSts2_3.LockSts2_Lockd */
      } else {
        lock_ARID_DEF.is_c36_lock = lock_IN_Unlock;
        rtb_DoorXXLockSts = 2U;

        /* LockSts2_3.LockSts2_Unlckd */
      }
      break;

     case lock_IN_SafeLock:
      rtb_DoorXXLockSts = 3U;
      if (tmpRead == 2) {
        lock_ARID_DEF.is_c36_lock = lock_IN_Unlock;
        rtb_DoorXXLockSts = 2U;

        /* LockSts2_3.LockSts2_Unlckd */
      }
      break;

     default:
      /* case IN_Unlock: */
      rtb_DoorXXLockSts = 2U;
      if (tmpRead == 1) {
        lock_ARID_DEF.is_c36_lock = lock_IN_Lock;
        rtb_DoorXXLockSts = 1U;

        /* LockSts2_3.LockSts2_Lockd */
      }
      break;
    }
  }

  /* End of Chart: '<S1>/CentralLockChart' */
  /* End of Outputs for SubSystem: '<Root>/Runnable_sys' */

  /* Outport: '<Root>/lock_status_lock_status' */
  (void)Rte_Write_lock_status_lock_status(rtb_DoorXXLockSts);
}

/* Model initialize function */
void lock_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
