/*
 * DIO.H
 *
 *  Created on: Sep 4, 2021
 *      Author: Sarah
 */

#ifndef DIO_DRIVER_DIO_H_
#define DIO_DRIVER_DIO_H_

/************************************************************************
  	  	  	  	  	  	  	  Includes
 ***********************************************************************/
#include "../registers.h"

/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

/* Toggle a certain bit in any register */
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )



/************************************************************************
  	  	  	  	  	  	  	  ENUMS
 ***********************************************************************/
typedef enum{
	INPUT,
	OUTPUT
}Direction_t;

typedef enum{
	A,
	B,
	C,
	D
}PORT_t;


/************************************************************************
  	  	  	  	  	  	  	  STRUCTS & UNIONS
 ***********************************************************************/
typedef struct{
	uint8_t direction;
	uint8_t Data;
	PORT_t port;
}PORT_Config_t;

typedef struct{
	uint8_t direction;
	uint8_t pin;
	uint8_t Data;
	PORT_t port;
}PIN_Config_t;


/************************************************************************
  	  	  	  	  	  	  	  Function Decelerations
 ***********************************************************************/
void Port_init(PORT_Config_t * Port);
void Port_write(PORT_Config_t *Port);
uint8_t Port_read(PORT_Config_t *Port);

//void Pin_init(PORT_Config_t * Pin);
//void Pin_write(PORT_Config_t *Pin);
//uint8_t Pin_read(PORT_Config_t *Pin);


#endif /* DIO_DRIVER_DIO_H_ */
