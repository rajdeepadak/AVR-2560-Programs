/*
 * Push Button.c
 *
 * Created: 12-07-2018 14:58:54
 * Author : rajdeep
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB = 0x01;
	int state = 0;
	uint8_t myvar;
	
    while (1) 
    {
		PORTB = 0x02;
		
		if((PINC &= 0x04) && (myvar == 0))
		  {
              state = 1 - state;
		  }
		
		myvar = PINC;  
		  
		if(state == 1)
		  {
			  PORTB = PORTB >> 1;
			  _delay_ms(20);
		  }
		  
		if(state == 0)
		  {
			  PORTB = PORTB >> 2;
			  _delay_ms(20);
		  }
    }
}

