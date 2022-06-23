/*
 * LIFO.c
 *
 *  Created on: 17/6/2022
 *      Author: Raouf
 */
#include"LIFO.h"
LIFO_Status LIFO_init(LIFO_Buf_t* P_LIFO_buf,LIFO_Data_type* buf,LIFO_Data_type length)
{
	//buf is the address of first element in array that used for LIFO
	P_LIFO_buf->base=buf;
	P_LIFO_buf->head=buf;
	P_LIFO_buf->length=length;
	P_LIFO_buf->counter=0;
	return LIFO_no_error;
}
LIFO_Status LIFO_Add_item(LIFO_Buf_t* P_LIFO_buf,LIFO_Data_type item)
{
	if(LIFO_check(P_LIFO_buf)==LIFO_null)
	{
		return LIFO_null;
	}
	if(LIFO_check(P_LIFO_buf)==LIFO_full)
	{
		return LIFO_full;
	}
	if(LIFO_check(P_LIFO_buf)==LIFO_empty||(LIFO_check(P_LIFO_buf)==LIFO_not_full))
	{
		*(P_LIFO_buf->head)=item;
		P_LIFO_buf->head++;
		P_LIFO_buf->counter++;;
		return LIFO_no_error;
	}

	return LIFO_error;
}
LIFO_Status LIFO_POP_item(LIFO_Buf_t* P_LIFO_buf,LIFO_Data_type* item)
{
	if(LIFO_check(P_LIFO_buf)==LIFO_null)
	{
		return LIFO_null;
	}
	if(LIFO_check(P_LIFO_buf)==LIFO_empty)
	{
		return LIFO_empty;
	}
	if((LIFO_check(P_LIFO_buf)==LIFO_full)||(LIFO_check(P_LIFO_buf)==LIFO_not_full))
	{
		P_LIFO_buf->head--;
		*item=*(P_LIFO_buf->head);
		P_LIFO_buf->counter--;
		return LIFO_no_error;
	}
	return LIFO_error;
}
LIFO_Status LIFO_check(LIFO_Buf_t* P_LIFO_buf)
{
	if(! P_LIFO_buf || !P_LIFO_buf->base || !P_LIFO_buf->head)
	{
		return LIFO_null;
	}
	if(P_LIFO_buf->head >=P_LIFO_buf->base+P_LIFO_buf->length)
	{
		return LIFO_full;
	}
	if(P_LIFO_buf->head==P_LIFO_buf->base)
	{
		return LIFO_empty;

	}
	if(P_LIFO_buf->head < P_LIFO_buf->base+P_LIFO_buf->length)
	{
		return LIFO_not_full;
	}
	return LIFO_error;
}


