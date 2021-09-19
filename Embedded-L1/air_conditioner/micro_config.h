 /******************************************************************************
 *
 * Module: Micro - Configuration
 *
 * File Name: Micro_Config.h
 *
 * Description: File include all Microcontroller libraries
 *
 *
 *******************************************************************************/

#ifndef MICRO_CONFIG_H_
#define MICRO_CONFIG_H_

#ifndef F_CPU
#define F_CPU 1000000UL //1MHz Clock frequency
#endif  

#include <avr/interrupt.h>
#include <util/delay.h>
#include "registers.h"
#include "std_types.h"
#include "common_macros.h"
#include "ADC_driver/adc.h"
#include "LCD_driver/lcd.h"
#include "keypad_driver/keypad.h"
#include "motor_driver/motor.h"

#endif /* MICRO_CONFIG_H_ */
