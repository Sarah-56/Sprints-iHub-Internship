/*
 * BS.h
 *  Created on: Aug 20, 2021
 *      Author: Sarah Mohamed
 */

#ifndef BS_H_
#define BS_H_

#include "types.h"

extern uint32_t arr[255];
extern uint32_t number;
extern uint8_t size;

void input(void);
void swap(uint32_t *a, uint32_t *b);
uint8_t partition(uint32_t array[], uint8_t low, uint8_t high);
void quickSort(uint32_t arr[], uint8_t low, uint8_t high);
uint8_t arraySorted(uint32_t arr[], uint8_t size);
uint8_t binarySearch(uint32_t arr[], uint8_t left, uint8_t right, uint32_t number);
void app(void);

#endif /* BS_H_ */
