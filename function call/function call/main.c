/*
 * function call.c
 *
 * Created: 11-07-2018 16:07:17
 * Author : rajdeep
 */ 
#define F_CPU 20000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB = 0xFF;
	
    while (1) 
    {
		Bijli();
    }
}

void Bijli()
{
	int i = 0;
	PORTB = 0x01;
	_delay_ms(1000);
	
	for(i=0 ; i<=7 ; i++)
	   {
		PORTB = PORTB << 1;
	    _delay_ms(1000);
       }
	
	if(i==8)
	  {
		  i = 0;
	  }
}
