/*#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

//BASE_ADDRESS
#define RCC_BASE	0x40021000
#define GPIOA_BASE	0x40010800
#define AFIO_BASE	0x40010000
#define EXTI_BASE	0x40010400
#define GPIOB_BASE	0x40010C00
//RCC
#define RCC_APB2ENR *(volatile uint32_t*)(RCC_BASE + 0x18)

//GPIOA
#define GPIOA_CRL	*(volatile uint32_t*)(GPIOA_BASE + 0x00)
#define GPIOA_CRH	*(volatile uint32_t*)(GPIOA_BASE + 0x04)
#define GPIOA_IDR	*(volatile uint32_t*)(GPIOA_BASE + 0x08)
#define GPIOA_ODR	*(volatile uint32_t*)(GPIOA_BASE + 0x0C)
#define GPIOA_BSRR  *(volatile uint32_t*)(GPIOA_BASE + 0x10)

//GPIOB
#define GPIOB_CRL	*(volatile uint32_t*)(GPIOB_BASE + 0x00)
#define GPIOB_CRH	*(volatile uint32_t*)(GPIOB_BASE + 0x04)
#define GPIOB_IDR	*(volatile uint32_t*)(GPIOB_BASE + 0x08)
#define GPIOB_ODR	*(volatile uint32_t*)(GPIOB_BASE + 0x0C)
#define GPIOB_BSRR  *(volatile uint32_t*)(GPIOB_BASE + 0x10)


//EXTI
#define EXTI_IMR	 	*(volatile uint32_t*)(EXTI_BASE + 0x00)
#define EXTI_RTSR	 	*(volatile uint32_t*)(EXTI_BASE + 0x08)
#define EXTI_PR		 	*(volatile uint32_t*)(EXTI_BASE + 0x14)
#define NVIC_ISR0		*(volatile uint32_t*)(0xE000E100)

void clock_enable(void){
	//IOPA & IOPB are enabled
	RCC_APB2ENR |= (1<<3) | (1<<2);
}

void GPIO_ENB(void){
	// Configure PinA 1,13 as input
//PinA1
	GPIOA_CRL &=~(0b11<<4);
	GPIOA_CRL |= (1<<6);
	GPIOA_CRL &=~(1<<4);
//PinA13
	GPIOA_CRL &=~(0b11<<20);
	GPIOA_CRL |= (1<<22);
	GPIOA_CRL &=~(1<<23);

	// Configure PinB 1,13 as output
//PinB1
	GPIOB_CRL |= (1<<4);
	GPIOB_CRL &=~(0b111<<5);
//PinB13
	GPIOB_CRH |= (1<<20);
	GPIOB_CRH &=~(0b111<<21);

}

void wait(int x){
	for(int i=0; i<x;i++){
		for(int j=0; j<500;j++);
	}
}

int main(void)
{
	clock_enable();
	GPIO_ENB();
	while(1){
			if( ( (GPIOA_IDR>>1) && 1 ) == 0 ){
				GPIOB_ODR ^= (1<<1);
				while(( (GPIOA_IDR>>1) && 1 ) == 0);
			}
			if( ( (GPIOA_IDR>>13) && 1 ) == 1 ){
				GPIOB_ODR ^= (1<<13);
			}

			wait(1);
	}
}*/

//RCC register to control clock
#define RCC_BASE (0x40021000)
#define RCC_APB2ENR *(volatile unsigned int*)(RCC_BASE + 0x18 )
#define IOPAEN (1<<2)
#define IOPBEN (1<<3)

//PORTA Enable reg
#define GPIOA_BASE (0x40010800)
#define GPIOA_CRL *(volatile unsigned int*)(GPIOA_BASE + 0x00 )
#define GPIOA_CRH *(volatile unsigned int*)(GPIOA_BASE + 0x04 )
#define GPIOA_IDR *(volatile unsigned int*)(GPIOA_BASE + 0x08 )
#define GPIOA_ODR *(volatile unsigned int*)(GPIOA_BASE + 0x0C )
//PORTB Enable reg
#define GPIOB_BASE (0x40010C00)
#define GPIOB_CRL *(volatile unsigned int*)(GPIOB_BASE + 0x00 )
#define GPIOB_CRH *(volatile unsigned int*)(GPIOB_BASE + 0x04 )
#define GPIOB_IDR *(volatile unsigned int*)(GPIOB_BASE + 0x08 )
#define GPIOB_ODR *(volatile unsigned int*)(GPIOB_BASE + 0x0C )

void CLOCK_SET(void)
{
	RCC_APB2ENR|=IOPAEN;
	RCC_APB2ENR|=IOPBEN;
}
void GPIO_SET(void)
{	//pinA1 input floating
	GPIOA_CRL&=~(0b11<<4);
	GPIOA_CRL|=(0b01<<6);

	//pinA13 input floating
	GPIOA_CRH&=~(0b11<<20);
	GPIOA_CRH|=(0b01<<22);

	//pinB1 Push Pull
	GPIOB_CRL|=(0b01<<4);
	GPIOB_CRL&=~(0b11<<6);

	//pinB13 Push Pull
	GPIOB_CRH|=(0b01<<20);
	GPIOB_CRH&=~(0b11<<22);

}
void WAIT(int x)
{
	int i,j;
	for(i=0;i<1;i++)
		for(j=0;j<512;j++);
}
int main()
{
	CLOCK_SET();
	GPIO_SET();
	while(1)
	{
		if( ( ((GPIOA_IDR)&(1<<1)) >>1) == 0)
		{
			GPIOB_ODR^=1<<1;
			while( ( ((GPIOA_IDR)&(1<<1)) >>1) == 0); //single pressing
		}
		if( ( ((GPIOA_IDR)&(1<<13)) >>13) == 1)
		{
			GPIOB_ODR^=1<<13;
		}
		WAIT(1);
	}


}
