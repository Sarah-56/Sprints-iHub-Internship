/*
 * buttons.h
 *
 *  Created on: Sep 5, 2021
 *      Author: Sarah
 */

#ifndef ECUAL_BUTTON_BUTTONS_H_
#define ECUAL_BUTTON_BUTTONS_H_

#include "../DIO_driver/DIO.h"
#include "../std_types.h"
#include "../registers.h"

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void button_init(void);
uint8_t button_read();


#endif /* ECUAL_BUTTON_BUTTONS_H_ */
