/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include"CA.h"
#include"DC.h"
#include"UltraSonic.h"
int main()
{
	pstate=STATE(waiting);
	pstate_DC=STATE(idle);
	pstate_US=STATE(busy);
	while(1)
	{
		pstate_US();
		pstate();
		pstate_DC();
	}
	return 0;

}
