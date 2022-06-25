/*
 * CA.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include"CA.h"
#include<stdio.h>
#include"stdlib.h"
unsigned int speed,distance,threshold=50;
STATE_define(waiting)
{
	//define state
	CA_state_id=waiting;
	//set distance
	distance=get_distace_randum(45,55,1);
	//set speed
	speed=0;
	//condition
	(distance<=threshold)? (pstate=STATE(waiting)):(pstate=STATE(driving));
	printf("Waiting State: distance=%d  Speed=%d\n",distance,speed);
}
STATE_define(driving)
{
	//define state
	CA_state_id=driving;
	//set distance
	distance=get_distace_randum(45,55,1);
	//set speed
	speed=30;
	//condition
	(distance<=threshold)? (pstate=STATE(waiting)):(pstate=STATE(driving));
	printf("Driving State: distance=%d  Speed=%d\n",distance,speed);
}
int get_distace_randum(int L,int H,int count)
{	//L=Low number that you want to get//H=high number that you want to get//count=number that you want to receive random number.
	int i=0,rand_num=0;
	for(i=0;i<count;i++)
	{
		return rand_num=(rand()%(H-L+1))+L;
	}
}
