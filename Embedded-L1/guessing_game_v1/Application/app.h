/*
 * app.h
 * Created on: Sep 14, 2021
 * Author    : Sarah
 */

#ifndef APPLICATION_APP_H_
#define APPLICATION_APP_H_

#include <stdlib.h>

#include "../Timer/timer.h"
#include "../LCD_driver/lcd.h"
#include "../common_macros.h"

#define LOWER 1
#define UPPER 15

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void APP_init(void);
void APP_update(void);

#endif /* APPLICATION_APP_H_ */
