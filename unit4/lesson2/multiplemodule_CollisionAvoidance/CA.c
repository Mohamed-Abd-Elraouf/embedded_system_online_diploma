/*
 * CA.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */

#include<stdio.h>
#include"stdlib.h"
#include"CA.h"
#include"state.h"
unsigned int speed,distance=0,threshold=50;
void send_distance(int d)
{
	distance=d;
	printf("US>>>>>>CA   US Distance Set\n");
	(distance<=threshold)? (pstate=STATE(waiting)):(pstate=STATE(driving));
}
STATE_define(waiting)
{
	//define state
	CA_state_id=waiting;
	//set speed
	speed=0;
	//condition
	(distance<=threshold)? (pstate=STATE(waiting)):(pstate=STATE(driving));
	printf("Waiting State: distance=%d  Speed=%d\n",distance,speed);
	set_motor(speed);
}
STATE_define(driving)
{
	//define state
	CA_state_id=driving;
	//set speed
	speed=30;
	//condition
	(distance<=threshold)? (pstate=STATE(waiting)):(pstate=STATE(driving));
	printf("Driving State: distance=%d  Speed=%d\n",distance,speed);
	set_motor(speed);
}

