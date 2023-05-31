/*
 * flash.c
 *
 *  Created on: may 20, 2023
 *      Author: Raouf
 */
// make external interrupt for external num0
#define Base_INT 0x40010400												//base address for external interrupt
#define EXTI_IMR 		*((volatile unsigned int*) (Base_INT+0x0))		//MRx interrupt mask register 0 masked 1 not masked
#define EXTI_RTSR 		*((volatile unsigned int*) ( Base_INT + 0x08 )) //TRx Rising trigger selection register 1 enable
#define EXTI_PR			*((volatile unsigned int*) (Base_INT+0x14))		//pending register,flash 1 for interrupt register to reset it write one

//set NVIC controller to get interrrupt reguest
#define NVIC_ISER0 	*((volatile unsigned int*)(0xE000E100))

//CLock register
#define RCC_APB2ENR  	 *((volatile unsigned int *) (Base+0x18))
#define IOPAEN  	    (1<<2)								//port A clock enable
#define AFIOEN			(1<<0)	//Alternate function IO clock enable



// define for GPIo For port A
#define Base 0x40021000
#define GPIO 0x40010800
#define AFIO_EXT1CR1     *((volatile unsigned int *) (Base+0x08))			//set input from GPIO to external interrupt 0000 for Pin 0 port A
#define GPIO_CRH     	 *((volatile unsigned int *) (GPIO+0x04))
#define GPIO_ODR    	 *((volatile unsigned int *) (GPIO+0x0c))
typedef union{
	int field;
	struct
	{
		int reserved:13;
		int P_13:1;
	}bit;
} R_ODR_t;

volatile R_ODR_t *R_ODR=(volatile R_ODR_t *)(GPIO+0x0c);

//set clock for
void CLOCK_INT(void)
{
	RCC_APB2ENR|=IOPAEN;
	RCC_APB2ENR|=AFIOEN;
}
//Function SET_INT to set all Register For External interrupt.
void SET_INT(void)
{
	NVIC_ISER0|=1<<6; // enable for interuupt number 6 which is an external interrrupt number 0
	EXTI_RTSR|=1<<0;
	EXTI_IMR|=(1<<0);

}
void SET_GPIO(void)
{
	GPIO_CRH&=0xff0fffff;
	GPIO_CRH|=0x00200000;
	AFIO_EXT1CR1 &=0;  //set pin0 port a to get interrupt
}
int main(void)
{
	CLOCK_INT();
	SET_GPIO();
	SET_INT();
	while(1)
	{

	}

}
void EXTI0_IRQHandler(void)
{
		int i=0,u=0;
		for(u=0;u<20;u++)
		{
		R_ODR->bit.P_13=0;
		for(i=0;i<33000;i++);
		R_ODR->bit.P_13=1;
		for(i=0;i<33000;i++);
		}

	//after finish we must disable pending register to not go into loop of interrrupt.
	EXTI_PR|=1<<0;
}
