/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include<stdio.h>
int main()
{
	float x=0;
	printf("Enter a Number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);

	 if(x>0)
		 printf("%1.2f is Positive",x);
	 else if(x<0)
		 printf("%1.2f is Negative",x);
	 else
		 printf("you entered zero");
	return 0;
}

