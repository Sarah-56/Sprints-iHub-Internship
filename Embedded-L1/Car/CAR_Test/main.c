/*
 * File Name: main.c
 * Description: Source file for main app
 * Created on: Sep 5, 2021
 * Author: Sarah
 */

/*****************************************************
 *                   INCLUDES
 *****************************************************/

#include "ECUAL/Button/buttons.h"
#include "ECUAL/Motor/motors.h"
#include "micro_config.h"

/*****************************************************
 *                   Global Variables
 *****************************************************/
static uint8_t sp = 10;
static Direction direct = Forward;
static uint8_t count = 0;

/*****************************************************
 *                   MAIN FUNCTION
 *****************************************************/
int main(void){
	/*Initializations*/
	motor_init();
	motor_start(sp, Forward);
	button_init();

	while(1)
	{
		switch(button_read()){
		case 0:
			motor_stop();
			break;
		case 1:
			motor_start(30, Left);
			break;
		case 4:
			motor_start(sp, direct);
			break;
		case 2:
			motor_start(30, Right);
			break;

		case 8:
			if(count == 3){
				count = 0;
				sp = 30;
				direct = Backward;
			}
			else{
				switch(count){
				case 0:
					sp = 30;
					direct = Forward;
					break;
				case 1:
					sp = 60;
					direct = Forward;
					break;
				case 2:
					sp = 90;
					direct = Forward;
					break;
				}
			}
			count++;
			break;
		}
	}
	return 0;
}

