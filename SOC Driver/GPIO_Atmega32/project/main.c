/*
 * main.c
 *
 * Created: 6/4/2023 11:03:46 PM
 *  Author: DELL
 */ 

#define F_CPU 8000000UL
#include"util/delay.h"
#include "Register.h"
void WAIT(void)
{
	int i,j;
	for(i=0;i<1000;i++)
		for(j=0;j<1000;j++);
}
int main(void)
{	
	CLEAR_BIT(DDRA,0);     //Let A0 as Input
	SET_BIT(DDRD,4);
	SET_BIT(DDRD,5);
	SET_BIT(DDRD,6);
	SET_BIT(DDRD,7);
    while(1)
    {
        if(READ_BIT(PINA,0)==0)	//use external interrupt
		{
			SET_BIT(PORTD,5);
			_delay_ms(1000);
			CLEAR_BIT(PORTD,5);
			
			SET_BIT(PORTD,6);
			_delay_ms(1000);
			CLEAR_BIT(PORTD,6);
			
			SET_BIT(PORTD,7);
			_delay_ms(1000);
			CLEAR_BIT(PORTD,7);
			
			SET_BIT(PORTD,4);
			_delay_ms(1000);
			CLEAR_BIT(PORTD,4);
			_delay_ms(1000);
		}
    }
}