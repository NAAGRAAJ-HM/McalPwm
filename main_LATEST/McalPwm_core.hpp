#pragma once
/******************************************************************************/
/* File   : McalPwm_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalPwm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PWM_CORE_FUNCTIONALITIES                                               \
              FUNC(void, PWM_CODE) SetDutyCycle         (void);                \
              FUNC(void, PWM_CODE) SetPeriodAndDuty     (void);                \
              FUNC(void, PWM_CODE) SetOutputToIdle      (void);                \
              FUNC(void, PWM_CODE) SetOutputState       (void);                \
              FUNC(void, PWM_CODE) DisableNotification  (void);                \
              FUNC(void, PWM_CODE) EnableNotification   (void);                \
              FUNC(void, PWM_CODE) SetPowerState        (void);                \
              FUNC(void, PWM_CODE) GetCurrentPowerState (void);                \
              FUNC(void, PWM_CODE) GetTargetPowerState  (void);                \
              FUNC(void, PWM_CODE) PreparePowerState    (void);                \

#define PWM_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, PWM_CODE) SetDutyCycle         (void) = 0;            \
      virtual FUNC(void, PWM_CODE) SetPeriodAndDuty     (void) = 0;            \
      virtual FUNC(void, PWM_CODE) SetOutputToIdle      (void) = 0;            \
      virtual FUNC(void, PWM_CODE) SetOutputState       (void) = 0;            \
      virtual FUNC(void, PWM_CODE) DisableNotification  (void) = 0;            \
      virtual FUNC(void, PWM_CODE) EnableNotification   (void) = 0;            \
      virtual FUNC(void, PWM_CODE) SetPowerState        (void) = 0;            \
      virtual FUNC(void, PWM_CODE) GetCurrentPowerState (void) = 0;            \
      virtual FUNC(void, PWM_CODE) GetTargetPowerState  (void) = 0;            \
      virtual FUNC(void, PWM_CODE) PreparePowerState    (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalPwm_Functionality{
   public:
      PWM_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

