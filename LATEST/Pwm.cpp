/*****************************************************/
/* File   : Pwm.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Pwm_EcuM.h"
#include "Pwm_SchM.h"
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
   ,  public interface_Pwm_EcuM
   ,  public interface_Pwm_SchM
{
   public:
      FUNC(void, PWM_CODE) InitFunction   (void);
      FUNC(void, PWM_CODE) DeInitFunction (void);
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
module_Pwm Pwm;

interface_Pwm_EcuM *EcuM_Client_ptr_Pwm = &Pwm;
interface_Pwm_SchM *SchM_Client_ptr_Pwm = &Pwm;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, PWM_CODE) module_Pwm::InitFunction(void){
}

FUNC(void, PWM_CODE) module_Pwm::DeInitFunction(void){
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

