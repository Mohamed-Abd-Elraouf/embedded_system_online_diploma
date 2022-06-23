/*
 * LIFO.h
 *
 *  Created on: 17/6/2022
 *      Author: Raouf
 */

#ifndef LIFO_H_
#define LIFO_H_
#include"stdio.h"
//size of data type(char ,unsigned int,float.....)
#define LIFO_Data_type unsigned int
// struct for lifo have(base pointer,head pointer,length,counter)
typedef struct{
	LIFO_Data_type counter;
	LIFO_Data_type length;
	LIFO_Data_type *base;
	LIFO_Data_type *head;
}LIFO_Buf_t;
//determine lifo status
typedef enum{
	LIFO_no_error,
	LIFO_error,
	LIFO_null,
	LIFO_full,
	LIFO_not_full,
	LIFO_empty
}LIFO_Status;
LIFO_Status 		LIFO_init(LIFO_Buf_t* P_LIFO_buf,LIFO_Data_type* item,LIFO_Data_type length);
LIFO_Status 	LIFO_Add_item(LIFO_Buf_t* P_LIFO_buf,LIFO_Data_type item);
LIFO_Status 	LIFO_POP_item(LIFO_Buf_t* P_LIFO_buf,LIFO_Data_type* item);
LIFO_Status 	   LIFO_check(LIFO_Buf_t* P_LIFO_buf);
#endif /* LIFO_H_ */
