#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Pwm.h"

class class_Pwm{
   public:
      FUNC(void, PWM_CODE) InitFunction(void);
};

extern class_Pwm Pwm;

