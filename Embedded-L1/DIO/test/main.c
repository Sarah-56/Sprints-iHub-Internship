/*
 * main.c
 * Author: Sarah
 */
#include "../BUTTON_driver/buttons.h"
#include "../LED_driver/LED_driver.h"
uint8_t flag = 0;    // button flag

int main(void){
	LED_init();
	button_init();
    while(1)
    {
		// check if the push button at PB0 is pressed or not
		if(button_read() == 1)
		{
			if(button_read() == 1)
			{
				if(flag == 0)
				{
					LED_toggle();// Toggle value of pin 0 in PORTC (LED Toggle)
					//set the button flag value to 1 to not enter here again until the button is released.
					flag = 1;
				}
			}
		}
		else
		{
			// button is released reset the button flag to value 0 again.
			flag = 0;
		}
    }
}

