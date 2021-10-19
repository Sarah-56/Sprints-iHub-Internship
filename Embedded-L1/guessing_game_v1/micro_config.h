 /******************************************************************************
 *
 * Module: Micro - Configuration
 *
 * File Name: Micro_Config.h
 *
 * Description: File include all Microcontroller libraries
 *
 * Author: Sarah
 *
 *******************************************************************************/

#ifndef MICRO_CONFIG_H_
#define MICRO_CONFIG_H_

#ifndef F_CPU
#define F_CPU 1000000UL //1MHz Clock frequency
#endif

#include "registers.h"
#include "common_macros.h"
#include "std_types.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/delay.h>

#endif /* MICRO_CONFIG_H_ */
