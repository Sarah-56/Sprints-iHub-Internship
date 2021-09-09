/*
 * buttons.c
 *
 *  Created on: Sep 5, 2021
 *      Author: Lenovo
 */

#include "buttons.h"
static PORT_Config_t PORTc;
void button_init(){
	PORTc.direction = 0;
	PORTc.Data = 0;/*initially off*/
	PORTc.port = C;
	Port_init(&PORTc);
}
uint8_t button_read(){
	Port_read(&PORTc);
	return PORTc.Data & 0x0F;
}
