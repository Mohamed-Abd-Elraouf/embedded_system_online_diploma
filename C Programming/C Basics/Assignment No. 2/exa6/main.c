/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include<stdio.h>
int main()
{
	int x=0,i=0,sum=0;

	printf("Enter an integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);

	 for(i=1;i<=x;i++)
	 {
		 sum+=i;
	 }
	 printf("sum=%d",sum);
	return 0;
}

