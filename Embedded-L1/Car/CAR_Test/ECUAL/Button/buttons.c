/*
 * buttons.c
 *
 *  Created on: Sep 5, 2021
 *      Author: Lenovo
 */

#include "buttons.h"
static PORT_Config_t PORTa;
void button_init(){
	PORTa.Data = 0;/*initially off*/
	PORTa.direction = 0;
	PORTa.port = A;
	Port_Init(&PORTa);
}
uint8_t button_read(){
	Read_Port(&PORTa);
	return PORTa.Data & 0x0F;
}
uint8_t read_L(void){
	Read_Port(&PORTa);
	if(PORTa.Data & 0x01){
		return 1;
	}
	return 0;

}
