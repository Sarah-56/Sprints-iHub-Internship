/*
 * Module: MOTOR
 *
 * File Name: motor.h
 *
 * Description: Header file for the motor driver
 */

#ifndef MOTOR_DRIVER_MOTOR_H_
#define MOTOR_DRIVER_MOTOR_H_

#include "../micro_config.h"

void motor_init();
void motor_CW();
void motor_ACW();
void motor_stop();

#endif /* MOTOR_DRIVER_MOTOR_H_ */
