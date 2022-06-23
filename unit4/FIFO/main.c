/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include"FIFO.h"
#include<stdio.h>
#define LEN 5
FIFO_Data arr[LEN];
int main()
{	FIFO_Data i=0,check;
	FIFO_Buf_t uart;
	FIFO_init(&uart,arr,LEN);

	for(i=0;i<uart.length+1;i++)
	{
		FIFO_Data item;
		printf("Value No %d:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&item);
		check=FIFO_Enqueue(&uart,item);
		switch(check)
		{
		case FIFO_full: printf("FIFo Full \n"); break;
		case FIFO_null:printf("FIFO NULL \n");  break;
		}
	}
	FIFO_print(&uart);
	FIFO_Dequeue(&uart,&i);
	printf("FIFO_Dequeue: Data(%d)\n",i);
	FIFO_Dequeue(&uart,&i);
	printf("FIFO_Dequeue: Data(%d)\n",i);
	FIFO_Dequeue(&uart,&i);
	printf("FIFO_Dequeue: Data(%d)\n",i);

	FIFO_print(&uart);


	return 0;
}

