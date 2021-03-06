/*
 * motors.h
 *
 *  Created on: Sep 5, 2021
 *      Author: Bassant Yasser
 */

#ifndef MOTORS_H_
#define MOTORS_H_

#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/timer/timer.h"

typedef enum{
	Forward,
	Backward,
	Left,
	Right
}Direction;

void motor_init();
void set_speed(uint8_t duty_cycle);
void set_direction(uint8_t dir);
void motor_start(uint8_t speed, Direction dir);
void motor_stop(void);

#endif /* MOTORS_H_ */
