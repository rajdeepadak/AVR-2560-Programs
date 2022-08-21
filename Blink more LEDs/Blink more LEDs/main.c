/*
 * Blink more LEDs.c
 *
 * Created: 11-07-2018 12:52:16
 * Author : rajdeep
 */ 

#include <avr/io.h>
#define F_CPU 20000000
#include <util/delay.h>



int main(void)
{
    DDRB = 0b11111111;
	PORTB = 0b00000000;
	
    while (1) 
    {
	  PORTB = 0b00000001;
	  _delay_ms(1000);
	  PORTB = 0b00000010;
	  _delay_ms(1000);
	  PORTB = 0b00000100;
	  _delay_ms(1000);
	  PORTB = 0b00001000;
	  _delay_ms(1000);
	  PORTB = 0b00010000;
	  _delay_ms(1000);
	  PORTB = 0b00100000;
	  _delay_ms(1000);
	  PORTB = 0b01000000;
	  _delay_ms(1000);
	  PORTB = 0b10000000;
	  _delay_ms(1000);	  
    }
}

