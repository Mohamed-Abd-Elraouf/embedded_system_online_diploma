/*
 * Ultra_Sonic.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include"UltraSonic.h"
#include<stdio.h>
#include"stdlib.h"

STATE_define(busy)
{	unsigned int distance=0;
	//define state
	Ultra_Sonic_state_id=busy;
	//set distance
	distance=get_distace_randum(45,55,1);
	//send distance
	printf("US is Busy: Distance=%d\n",distance);
	send_distance(distance);
	pstate_US=STATE(busy);

}

int get_distace_randum(int L,int H,int count)
{	//L=Low number that you want to get//H=high number that you want to get//count=number that you want to receive random number.
	int i=0,rand_num=0;
	for(i=0;i<count;i++)
	{
		return rand_num=(rand()%(H-L+1))+L;
	}
}
