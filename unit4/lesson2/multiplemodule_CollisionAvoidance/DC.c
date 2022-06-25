/*
 * DC.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include"DC.h"
#include<stdio.h>
#include"stdlib.h"
#include"state.h"
unsigned int speed=0;
void set_motor(int s)
{
	speed=s;
	printf("CA>>>>>>>>>DC  DC_Motor()\n");
	if(speed==0)
		pstate_DC=STATE(idle);
	if(speed==30)
		pstate_DC=STATE(drive);
}
STATE_define(idle)
{
	//define state
	DC_state_id=idle;
	printf("DC idle state: speed=%d\n\n\n",speed);
}
STATE_define(drive)
{
	//define state
	DC_state_id=drive;
	printf("DC drive state: speed=%d\n\n\n",speed);
}
