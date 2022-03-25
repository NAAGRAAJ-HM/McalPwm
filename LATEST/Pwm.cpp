/******************************************************************************/
/* File   : Pwm.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgPwm.hpp"
#include "infPwm_EcuM.hpp"
#include "infPwm_Dcm.hpp"
#include "infPwm_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PWM_AR_RELEASE_MAJOR_VERSION                                           4
#define PWM_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(PWM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible PWM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(PWM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible PWM_AR_RELEASE_MINOR_VERSION!"
#endif

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

   private:
      CONST(Std_TypeVersionInfo, PWM_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_Pwm, PWM_VAR) Pwm;
CONSTP2VAR(infEcuMClient, PWM_VAR, PWM_CONST) gptrinfEcuMClient_Pwm = &Pwm;
CONSTP2VAR(infDcmClient,  PWM_VAR, PWM_CONST) gptrinfDcmClient_Pwm  = &Pwm;
CONSTP2VAR(infSchMClient, PWM_VAR, PWM_CONST) gptrinfSchMClient_Pwm = &Pwm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PWM_CODE) module_Pwm::InitFunction(void){
   Pwm.IsInitDone = E_OK;
}

FUNC(void, PWM_CODE) module_Pwm::DeInitFunction(void){
   Pwm.IsInitDone = E_NOT_OK;
}

FUNC(void, PWM_CODE) module_Pwm::GetVersionInfo(void){
#if(STD_ON == Pwm_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, PWM_CODE) module_Pwm::MainFunction(void){
}

#include "Pwm_Unused.hpp"

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

