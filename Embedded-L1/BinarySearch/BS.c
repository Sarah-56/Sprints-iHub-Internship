/*
 * BS.c
 *
 *  Created on: Aug 20, 2021
 *      Author: Lenovo
 */

#include <stdio.h>
#include "BS.h"
#include "types.h"

void input(void){
	printf("Enter array's size: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &size);
	printf("Enter array's elements: ");
	fflush(stdout);
	fflush(stdin);
	for(uint8_t i = 0; i < size; i++){
		scanf("%ld", &arr[i]);
	}
	printf("enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%ld", &number);
}

void swap(uint32_t *a, uint32_t *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
uint8_t partition(uint32_t array[], uint8_t low, uint8_t high) {
  int pivot = array[high];
  uint8_t i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(uint32_t arr[], uint8_t low, uint8_t high) {
  if (low < high){
    uint8_t pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

uint8_t binarySearch(uint32_t arr[], uint8_t left, uint8_t right, uint32_t number){
	if (left <= right) {
		uint8_t mid = (left + right) / 2;
		if (number == arr[mid]) {
			return mid;
		}
		if (number < arr[mid]) {
			return binarySearch(arr, left, mid - 1, number);
		}
		else if (number > arr[mid]) {
			return binarySearch(arr, mid + 1, right, number);
		}
	}
	return 255;
}

uint8_t arraySorted(uint32_t arr[], uint8_t size){
	uint8_t i = 0;
	while(i < size - 1){
		if(arr[i] > arr[i+1])return 0;
		i++;
	}
	return 1;
}
void app(void){
	uint8_t result;
	input();

	fflush(stdout);
	fflush(stdin);

	result = arraySorted(arr, size);
	switch(result){
	case 1:
		printf("Array is sorted\n");
		result = binarySearch(arr, 0, size - 1, number);
		(result == 255) ? printf("Element is not present in array")
					 : printf("Element is present at index %d",result);
		break;
	case 0:
		printf("Array isn't sorted\n");
		quickSort(arr, 0, size - 1);
		result = binarySearch(arr, 0, size - 1, number);
		(result == 255) ? printf("Element is not present in array")
					 : printf("Element is present at index %d",result);
		break;

	}
}

