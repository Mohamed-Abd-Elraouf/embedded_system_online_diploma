/*
 * FIFO.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include"FIFO.h"
FIFO_status_t FIFO_init(FIFO_Buf_t* pbuf,FIFO_Data* buf,FIFO_Data length)
{
	pbuf->base=buf;
	pbuf->head=buf;
	pbuf->tail=buf;
	pbuf->counter=0;
	pbuf->length=length;
	return FIFO_no_error;

}
FIFO_status_t FIFO_Enqueue(FIFO_Buf_t* pbuf,FIFO_Data item)
{
	if(!pbuf || !pbuf->base || !pbuf->head)
	{
		return FIFO_null;
	}
	if(FIFO_check_full(pbuf)==FIFO_full)
	{

		return FIFO_full;
	}
	*(pbuf->head)=item;
	pbuf->head++;
	pbuf->counter++;
	if(pbuf->counter==pbuf->length)
	{
		pbuf->head=pbuf->base;
	}
	return FIFO_no_error;
}
FIFO_status_t FIFO_Dequeue(FIFO_Buf_t* pbuf,FIFO_Data *item)
{
	if(!pbuf || !pbuf->base || !pbuf->head)
	{
		return FIFO_null;
	}
	if(pbuf->counter==0)
	{
		return FIFO_empty;
	}
	*item=*(pbuf->tail);
	pbuf->counter--;
	*(pbuf->tail)=0;
	pbuf->tail++;
	if(pbuf->tail==pbuf->base+pbuf->length)
	{
		pbuf->tail=pbuf->base;
	}
	return FIFO_no_error;
}
FIFO_status_t FIFO_check_full(FIFO_Buf_t* pbuf)
{
	if(!pbuf || !pbuf->base || !pbuf->head)
	{
		return FIFO_null;
	}
	if(pbuf->counter==pbuf->length)
	{
		return FIFO_full;
	}
	return FIFO_no_error;
}
FIFO_status_t FIFO_print(FIFO_Buf_t* pbuf)
{	FIFO_Data i,*temp=pbuf->base;
	if(!pbuf || !pbuf->base || !pbuf->head)
	{
		return FIFO_null;
	}
	if(pbuf->counter==0)
	{
		return FIFO_empty;
	}
	printf("=========FIFO Print=========\n");
	for(i=0;i<pbuf->length;i++)
	{
		printf("%d\n",*temp);
		temp++;
	}
	return FIFO_no_error;
}


