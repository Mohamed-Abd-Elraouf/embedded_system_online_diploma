/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include<stdio.h>
int main()
{
	int x=0,i=0,fact=1;

	printf("Enter an integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	if(x>=0)
	{
		for(i=1;i<=x;i++)
		{
			fact*=i;
		}
		printf("factorial=%d",fact);
	}
	else
	{
		printf("ERROR!!!Factorial of negative number doesn't exist.");
	}
	return 0;
}

