/******************************************************************************/
/* File   : Pwm.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infPwm_EcuM.h"
#include "infPwm_Dcm.h"
#include "infPwm_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Pwm:
      public abstract_module
{
   public:
      FUNC(void, PWM_CODE) InitFunction   (void);
      FUNC(void, PWM_CODE) DeInitFunction (void);
      FUNC(void, PWM_CODE) GetVersionInfo (void);
      FUNC(void, PWM_CODE) MainFunction   (void);
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


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_Pwm, PWM_VAR) Pwm;
CONSTP2VAR(infEcuMClient, PWM_VAR, PWM_CONST) gptrinfEcuMClient_Pwm = &Pwm;
CONSTP2VAR(infDcmClient,  PWM_VAR, PWM_CONST) gptrinfDcmClient_Pwm  = &Pwm;
CONSTP2VAR(infSchMClient, PWM_VAR, PWM_CONST) gptrinfSchMClient_Pwm = &Pwm;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, PWM_CODE) module_Pwm::InitFunction(void){
}

FUNC(void, PWM_CODE) module_Pwm::DeInitFunction(void){
}

FUNC(void, PWM_CODE) module_Pwm::GetVersionInfo(void){
}

FUNC(void, PWM_CODE) module_Pwm::MainFunction(void){
}

#include "Pwm_Unused.h"

FUNC(void, PWM_CODE) class_Pwm_Unused::SetDutyCycle(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::SetPeriodAndDuty(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::SetOutputToIdle(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::SetOutputState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::DisableNotification(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::EnableNotification(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::SetPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::GetCurrentPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::GetTargetPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::PreparePowerState(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

