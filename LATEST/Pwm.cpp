/*****************************************************/
/* File   : Pwm.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infPwm_EcuM.h"
#include "infPwm_SchM.h"
#include "Pwm_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Pwm:
      public abstract_module
{
   public:
      FUNC(void, PWM_CODE) InitFunction   (void);
      FUNC(void, PWM_CODE) DeInitFunction (void);
      FUNC(void, PWM_CODE) GetVersionInfo (void);
      FUNC(void, PWM_CODE) MainFunction   (void);
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
module_Pwm     Pwm;
infEcuMClient* gptrinfEcuMClient_Pwm = &Pwm;
infDcmClient*  gptrinfDcmClient_Pwm  = &Pwm;
infSchMClient* gptrinfSchMClient_Pwm = &Pwm;

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

FUNC(void, PWM_CODE) class_Pwm_Unused::GetVersionInfo(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

