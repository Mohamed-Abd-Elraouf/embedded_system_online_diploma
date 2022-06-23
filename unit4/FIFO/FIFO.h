/*
 * FIFO.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */

#ifndef FIFO_H_
#define FIFO_H_
#include<stdio.h>
//size for data.
#define FIFO_Data unsigned int

typedef struct
{
	FIFO_Data* base;
	FIFO_Data* head;
	FIFO_Data* tail;
	FIFO_Data length;
	FIFO_Data counter;
}FIFO_Buf_t;
typedef enum
{
	FIFO_null,
	FIFO_empty,
	FIFO_error,
	FIFO_no_error,
	FIFO_not_full,
	FIFO_full
}FIFO_status_t;
FIFO_status_t FIFO_init(FIFO_Buf_t* Pbuf,FIFO_Data* buf,FIFO_Data length);
FIFO_status_t FIFO_Enqueue(FIFO_Buf_t* pbuf,FIFO_Data item);
FIFO_status_t FIFO_Dequeue(FIFO_Buf_t* pbuf,FIFO_Data *item);
FIFO_status_t FIFO_check_full(FIFO_Buf_t* pbuf);
FIFO_status_t FIFO_print(FIFO_Buf_t* pbuf);
#endif /* FIFO_H_ */
