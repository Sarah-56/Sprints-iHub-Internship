/*
 * LED_driver.c
 *
 *      Author: Sarah
 */

/************************************************************************
  	  	  	  	  	  	  	  Includes
 ***********************************************************************/
#include "LED_driver.h"
#include "../DIO_driver/DIO.h"

/************************************************************************
  	  	  	  	  	  	  	  Local Macros
 ***********************************************************************/
#define LED 0x01

/************************************************************************
  	  	  	  	  	  	  	  Global Static Variables
 ***********************************************************************/
static PORT_Config_t Porta;


/************************************************************************
  	  	  	  	  	  	  	  Function Definitions
 ***********************************************************************/
void LED_init(){
	Porta.port = A;
	Porta.direction = LED;
	Porta.Data = LED;
	Port_init(&Porta);
	Port_write(&Porta);
}

void LED_on(){
	Porta.Data |= LED;
	Port_write(&Porta);
}

void LED_off(){
	Porta.Data &= ~LED;
	Port_write(&Porta);
}

void LED_toggle(){
	Porta.Data ^= LED;
	Port_write(&Porta);
}

