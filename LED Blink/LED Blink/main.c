/*
 * LED Blink.c
 *
 * Created: 11-07-2018 12:44:30
 * Author : rajdeep
 */ 

#include <avr/io.h>
#define F_CPU 20000000
#include <util/delay.h>


int main(void)
{
    DDRD = 0b11111111;
	PORTD = 0b00000000;
	
    while (1) 
    {
      PORTD = 0b11111111;
	  _delay_ms(1000);
	  PORTD = 0b00000000;
	  _delay_ms(1000);
	}
}

