/******************************************************************************/
/* File   : McalPwm.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalPwm.hpp"
#include "infMcalPwm_Imp.hpp"

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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_McalPwm, PWM_VAR) McalPwm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PWM_CODE) module_McalPwm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, PWM_CONST,       PWM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   PWM_CONFIG_DATA, PWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalPwm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalPwm_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalPwm_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalPwm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalPwm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PWM_CODE) module_McalPwm::DeInitFunction(
   void
){
#if(STD_ON == McalPwm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalPwm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalPwm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PWM_CODE) module_McalPwm::MainFunction(
   void
){
#if(STD_ON == McalPwm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalPwm_InitCheck)
   }
   else{
#if(STD_ON == McalPwm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PWM_CODE) module_McalPwm::SetDutyCycle(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::SetPeriodAndDuty(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::SetOutputToIdle(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::SetOutputState(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::DisableNotification(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::EnableNotification(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::SetPowerState(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::GetCurrentPowerState(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::GetTargetPowerState(
   void
){
}

FUNC(void, PWM_CODE) module_McalPwm::PreparePowerState(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

