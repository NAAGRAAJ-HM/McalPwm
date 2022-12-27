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
#define MCALPWM_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALPWM_CODE) SetDutyCycle         (void);                \
              FUNC(void, MCALPWM_CODE) SetPeriodAndDuty     (void);                \
              FUNC(void, MCALPWM_CODE) SetOutputToIdle      (void);                \
              FUNC(void, MCALPWM_CODE) SetOutputState       (void);                \
              FUNC(void, MCALPWM_CODE) DisableNotification  (void);                \
              FUNC(void, MCALPWM_CODE) EnableNotification   (void);                \
              FUNC(void, MCALPWM_CODE) SetPowerState        (void);                \
              FUNC(void, MCALPWM_CODE) GetCurrentPowerState (void);                \
              FUNC(void, MCALPWM_CODE) GetTargetPowerState  (void);                \
              FUNC(void, MCALPWM_CODE) PreparePowerState    (void);                \

#define MCALPWM_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALPWM_CODE) SetDutyCycle         (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) SetPeriodAndDuty     (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) SetOutputToIdle      (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) SetOutputState       (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) DisableNotification  (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) EnableNotification   (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) SetPowerState        (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) GetCurrentPowerState (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) GetTargetPowerState  (void) = 0;            \
      virtual FUNC(void, MCALPWM_CODE) PreparePowerState    (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalPwm_Functionality{
   public:
      MCALPWM_CORE_FUNCTIONALITIES_VIRTUAL
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

