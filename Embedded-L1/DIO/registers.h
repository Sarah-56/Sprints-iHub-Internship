/*
 * registers.h
 *
 *  Created on: Sep 4, 2021
 *      Author: Sarah
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_

/************************************************************************
  	  	  	  	  	  	  	  Includes
 ***********************************************************************/
#include "types.h"

/************************************************************************
  	  	  	  	  	  	  	  Registers Definitions
 ***********************************************************************/
#define PA_DIR	*((volatile uint8_t*)(0x3A))
#define PA_IN	*((volatile uint8_t*)(0x39))
#define PA_OUT	*((volatile uint8_t*)(0x3B))

#define PB_DIR	*((volatile uint8_t*)(0x37))
#define PB_OUT	*((volatile uint8_t*)(0x38))
#define PB_IN	*((volatile uint8_t*)(0x36))

#define PC_DIR	*((volatile uint8_t*)(0x34))
#define PC_OUT	*((volatile uint8_t*)(0x35))
#define PC_IN	*((volatile uint8_t*)(0x33))

#define PD_DIR	*((volatile uint8_t*)(0x31))
#define PD_OUT	*((volatile uint8_t*)(0x32))
#define PD_IN	*((volatile uint8_t*)(0x30))

#endif /* REGISTERS_H_ */
