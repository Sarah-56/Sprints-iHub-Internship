/*
 * buttons.h
 *
 *  Created on: Sep 5, 2021
 *      Author: Lenovo
 */

#ifndef ECUAL_BUTTON_BUTTONS_H_
#define ECUAL_BUTTON_BUTTONS_H_

#include "../types.h"
#include "../registers.h"
#include "../DIO_driver/DIO.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
#define L 0
#define R 1
#define M 2
#define G 3

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void button_init(void);
uint8_t button_read();


#endif /* ECUAL_BUTTON_BUTTONS_H_ */
