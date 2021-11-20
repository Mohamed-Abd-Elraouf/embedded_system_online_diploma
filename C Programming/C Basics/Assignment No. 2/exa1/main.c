/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include<stdio.h>
int main()
{
	int n=0;
	printf("Enter an integer you want to check:");
		fflush(stdin);
		fflush(stdout);
	scanf("%d",&n);
	if(n%2==0)
		{
			printf("%d is Even",n);
		}
	else
		{
			printf("%d is Odd",n);
		}
}

