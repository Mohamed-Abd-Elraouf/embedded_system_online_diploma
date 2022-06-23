/*
 * main.c

 *
 *  Created on: 17/6/2022
 *      Author: Raouf
 */

//LIFO(Last IN First Out)
#include<stdio.h>
#include"LIFO.h"
#define LENGTH 5
LIFO_Data_type arr[LENGTH];
int main()
{
	LIFO_Buf_t uart_LIFO;
	LIFO_Data_type i,state,item;
	LIFO_init(&uart_LIFO,arr,LENGTH);
	for(i=0;i<5;i++)
	{
		printf("LIFO Member No %d=",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&item);
		state=LIFO_Add_item(&uart_LIFO,item);
		switch(state)
		{
		case LIFO_full:		printf("LIFO Is Full!!!!\n");	break;
		case LIFO_empty:	printf("LIFO Is empty!!!!\n");	break;
		case LIFO_null:		printf("LIFO Is NULL!!!!\n");	break;
		case LIFO_error:	printf("error on LIFO!!!!\n");	break;
		}
	}
	for(i=0;i<5;i++)
	{
		state=LIFO_POP_item(&uart_LIFO,&item);
		switch(state)
		{
		case LIFO_full:		printf("LIFO Member No %d is=%d\n",LENGTH-i,item);	break;
		case LIFO_empty:	printf("LIFO Is empty!!!!\n");			break;
		case LIFO_null:		printf("LIFO Is NULL!!!!\n");			break;
		case LIFO_error:	printf("error on LIFO!!!!\n");			break;
		case LIFO_no_error:	printf("LIFO Member No %d is=%d\n",LENGTH-i,item);   break;
		}
	}


}

