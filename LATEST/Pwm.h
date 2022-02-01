#pragma once
/*****************************************************/
/* File   : Pwm.h                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Pwm.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Pwm{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, PWM_CODE) InitFunction         (void);
      FUNC(void, PWM_CODE) DeInitFunction       (void);
      FUNC(void, PWM_CODE) SetDutyCycle         (void);
      FUNC(void, PWM_CODE) SetPeriodAndDuty     (void);
      FUNC(void, PWM_CODE) SetOutputToIdle      (void);
      FUNC(void, PWM_CODE) SetOutputState       (void);
      FUNC(void, PWM_CODE) DisableNotification  (void);
      FUNC(void, PWM_CODE) EnableNotification   (void);
      FUNC(void, PWM_CODE) SetPowerState        (void);
      FUNC(void, PWM_CODE) GetCurrentPowerState (void);
      FUNC(void, PWM_CODE) GetTargetPowerState  (void);
      FUNC(void, PWM_CODE) PreparePowerState    (void);
      FUNC(void, PWM_CODE) GetVersionInfo       (void);
      FUNC(void, PWM_CODE) MainFunction         (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_Pwm Pwm;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

