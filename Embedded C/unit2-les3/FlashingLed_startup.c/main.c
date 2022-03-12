/*
 * flash.c
 *
 *  Created on: Jan 30, 2022
 *      Author: Raouf
 */

#define Base 0x40021000
#define GPIO 0x40010800
#define RCC_APB2ENR  	 *((volatile unsigned int *) (Base+0x18))
#define GPIO_CRH     	 *((volatile unsigned int *) (GPIO+0x04))
#define GPIO_ODR    	 *((volatile unsigned int *) (GPIO+0x0C))
#define IOPAEN  	     (1<<2)
typedef union{
	int field;
	struct
	{
		unsigned int reserved:13;
		unsigned int P_13:1;
	}bit;
} R_ODR_t;
volatile R_ODR_t *R_ODR=(volatile R_ODR_t *)(GPIO+0x0C);
int main(void)
{
	RCC_APB2ENR|=IOPAEN;
	GPIO_CRH&=0xFF0FFFFF;
	GPIO_CRH|=0x00200000;
	while(1)
	{	
		int i;
		R_ODR->bit.P_13=0;
		for(i=0;i<5000;i++);
		R_ODR->bit.P_13=1;
		for(i=0;i<5000;i++);

	}

}
