/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Raouf
 */
#include"CA.h"
int main()
{
	pstate=STATE(waiting);
	while(1)
	{
		pstate();
	}
	return 0;

}
