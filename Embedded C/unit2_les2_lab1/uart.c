#include"uart.h"
#define UARTDR *((volatile unsigned int*)((unsigned int*)0x101f1000))
void Uart_Send_String(unsigned char *p_tx_string)
{
	while((*p_tx_string)!='\0')
	{
		UARTDR=(unsigned int)(*p_tx_string);
		p_tx_string++;
	}
}
