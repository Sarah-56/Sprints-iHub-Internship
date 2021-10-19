/*
 * DIO.C
 *
 *  Created on: Sep 4, 2021
 *      Author: Sarah
 */

/************************************************************************
  	  	  	  	  	  	  	  Includes
 ***********************************************************************/
#include "DIO.h"

#include <avr/io.h>
/************************************************************************
  	  	  	  	  	  	  	  Function Definitions
 ***********************************************************************/
void Port_init(PORT_Config_t * Port){
	switch(Port->port){
	case A:
		PA_DIR = Port->direction;
		break;
	case B:
		PB_DIR = Port->direction;
		break;
	case C:
		PC_DIR = Port->direction;
		break;
	case D:
		PD_DIR = Port->direction;
		break;
	}
}

void Port_write(PORT_Config_t *Port){
	switch(Port->port){
	case A:
		PA_OUT = Port->Data;
		break;
	case B:
		PB_OUT = Port->Data;
		break;
	case C:
		PC_OUT = Port->Data;
		break;
	case D:
		PD_OUT = Port->Data;
		break;
	}
}

uint8_t Port_read(PORT_Config_t *Port){
	switch(Port->port){
	case A:
		Port->Data = PA_IN;
		return PA_IN;
	case B:
		Port->Data = PB_IN;
		return PB_IN;
	case C:
		Port->Data = PC_IN;
		return PC_IN;
	case D:
		Port->Data = PD_IN;
		return PD_IN;
	}
}

//void Pin_init(PIN_Config_t * Pin){
//	switch(Pin->port){
//	case A:
//		if(Pin->direction){
//			SET_BIT(PA_DIR, Pin->pin);
//		}
//		else{
//			CLEAR_BIT(PA_DIR, Pin->pin);
//		}
//		break;
//	case B:
//		if(Pin->direction){
//			SET_BIT(PB_DIR, Pin->pin);
//		}
//		else{
//			CLEAR_BIT(PB_DIR, Pin->pin);
//		}
//		break;
//	case C:
//		if(Pin->direction){
//			SET_BIT(PC_DIR, Pin->pin);
//		}
//		else{
//			CLEAR_BIT(PC_DIR, Pin->pin);
//		}
//		break;
//	case D:
//		if(Pin->direction){
//			SET_BIT(PD_DIR, Pin->pin);
//		}
//		else{
//			CLEAR_BIT(PD_DIR, Pin->pin);
//		}
//		break;
//	}
//}
//
//void Pin_write(PIN_Config_t *Pin){
//	switch(Pin->port){
//	case A:
//		if(Pin->Data){
//			SET_BIT(PA_DIR, Pin->pin);
//		}
//		else{
//			CLEAR_BIT(PA_DIR, Pin->pin);
//		}
//		break;
//	case B:
//		if(Pin->Data){
//			SET_BIT(PB_DIR, Pin->pin);
//		}
//		else{
//			CLEAR_BIT(PB_DIR, Pin->pin);
//		}
//		break;
//	case C:
//		if(Pin->Data){
//			SET_BIT(PC_DIR, Pin->pin);
//		}
//		else{
//			CLEAR_BIT(PC_DIR, Pin->pin);
//		}
//		break;
//	case D:
//		if(Pin->Data){
//			SET_BIT(PD_DIR, Pin->pin);
//		}
//		else{
//			CLEAR_BIT(PD_DIR, Pin->pin);
//		}
//		break;
//	}
//}
//
//uint8_t Pin_read(PIN_Config_t *Pin){
//	switch(Pin->port){
//	case A:
//		Pin->Data = BIT_IS_SET(PA_IN, Pin->pin);
//		return Pin->Data;
//	case B:
//		Pin->Data = BIT_IS_SET(PB_IN, Pin->pin);
//		return Pin->Data;
//	case C:
//		Pin->Data = BIT_IS_SET(PC_IN, Pin->pin);
//		return Pin->Data;
//	case D:
//		Pin->Data = BIT_IS_SET(PD_IN, Pin->pin);
//		return Pin->Data;
//	}
//}


