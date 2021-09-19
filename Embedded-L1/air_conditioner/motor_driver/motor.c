/*
 * Module: MOTOR
 *
 * File Name: motor.c
 *
 * Description: Source file for the motor driver
 */

#include "motor.h"

void motor_init(){
	SET_BIT(DDRD, PD0);
	SET_BIT(DDRD, PD1);
	SET_BIT(DDRD, PD2);

	CLEAR_BIT(PORTD, PD2);
	CLEAR_BIT(PORTD, PD1);
	SET_BIT(PORTD, PD0);
}
void motor_CW(){
	CLEAR_BIT(PORTD, PD2);
	SET_BIT(PORTD, PD1);
}
void motor_ACW(){
	CLEAR_BIT(PORTD, PD1);
	SET_BIT(PORTD, PD2);
}
void motor_stop(){
	CLEAR_BIT(PORTD, PD1);
	CLEAR_BIT(PORTD, PD2);
}

