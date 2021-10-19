/*
 * buttons.h
 *
 *  Created on: Sep 5, 2021
 *      Author: Basmala
 */

#ifndef ECUAL_BUTTON_BUTTONS_H_
#define ECUAL_BUTTON_BUTTONS_H_

#include "../../std_types.h"
#include "../../common_macros.h"
#include "../../registers.h"
#include "../../MCAL/DIO/DIO.h"

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void button_init(void);
uint8_t button_read();


#endif /* ECUAL_BUTTON_BUTTONS_H_ */
