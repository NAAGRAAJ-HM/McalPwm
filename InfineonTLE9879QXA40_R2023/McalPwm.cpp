/******************************************************************************/
/* File   : McalPwm.cpp                                                       */
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

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
VAR(module_McalPwm, MCALPWM_VAR) McalPwm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALPWM_CODE) module_McalPwm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALPWM_CONST,       MCALPWM_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALPWM_CONFIG_DATA, MCALPWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalPwm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
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
         ,  MCALPWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPWM_CODE) module_McalPwm::DeInitFunction(
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
         ,  MCALPWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPWM_CODE) module_McalPwm::MainFunction(
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
         ,  MCALPWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetDutyCycle(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetPeriodAndDuty(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetOutputToIdle(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetOutputState(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::DisableNotification(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::EnableNotification(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::SetPowerState(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::GetCurrentPowerState(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::GetTargetPowerState(
   void
){
}

FUNC(void, MCALPWM_CODE) module_McalPwm::PreparePowerState(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

