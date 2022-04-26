/******************************************************************************/
/* File   : Pwm.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infPwm_EcuM.hpp"
#include "infPwm_Dcm.hpp"
#include "infPwm_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PWM_AR_RELEASE_VERSION_MAJOR                                           4
#define PWM_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(PWM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible PWM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(PWM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible PWM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Pwm_Functionality{
   public:
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
};

class module_Pwm:
      public abstract_module
   ,  public class_Pwm_Functionality
{
   public:
      module_Pwm(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, PWM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, PWM_CONFIG_DATA, PWM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, PWM_CODE) DeInitFunction (void);
      FUNC(void, PWM_CODE) MainFunction   (void);
};

extern VAR(module_Pwm, PWM_VAR) Pwm;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, PWM_VAR, PWM_CONST) gptrinfEcuMClient_Pwm = &Pwm;
CONSTP2VAR(infDcmClient,  PWM_VAR, PWM_CONST) gptrinfDcmClient_Pwm  = &Pwm;
CONSTP2VAR(infSchMClient, PWM_VAR, PWM_CONST) gptrinfSchMClient_Pwm = &Pwm;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgPwm.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Pwm, PWM_VAR) Pwm(
   {
         PWM_AR_RELEASE_VERSION_MAJOR
      ,  PWM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PWM_CODE) module_Pwm::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, PWM_CONFIG_DATA, PWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Pwm_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Pwm_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Pwm_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgPwm;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Pwm_InitCheck)
   }
#endif
}

FUNC(void, PWM_CODE) module_Pwm::DeInitFunction(void){
#if(STD_ON == Pwm_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Pwm_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Pwm_InitCheck)
   }
#endif
}

FUNC(void, PWM_CODE) module_Pwm::MainFunction(void){
#if(STD_ON == Pwm_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Pwm_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Pwm_InitCheck)
   }
#endif
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::SetDutyCycle(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::SetPeriodAndDuty(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::SetOutputToIdle(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::SetOutputState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::DisableNotification(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::EnableNotification(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::SetPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::GetCurrentPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::GetTargetPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Functionality::PreparePowerState(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

