/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "lock"
   ARXML schema: "R19-11"
   File generated on: "18-Oct-2024 09:36:51"  */

#ifndef Rte_lock_h
#define Rte_lock_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_Read_lock_control_lock_cmd Rte_Read_lock_lock_control_lock_cmd

Std_ReturnType Rte_Read_lock_control_lock_cmd(uint8* u);

#define Rte_Write_lock_status_lock_status Rte_Write_lock_lock_status_lock_status

Std_ReturnType Rte_Write_lock_status_lock_status(uint8 u);

#define Rte_Invalidate_lock_status_lock_status Rte_Invalidate_lock_lock_status_lock_status

Std_ReturnType Rte_Invalidate_lock_status_lock_status(void);

/* Entry point functions */
extern FUNC(void, lock_CODE) Runnable(void);
extern FUNC(void, lock_CODE) lock_Init(void);

#endif
