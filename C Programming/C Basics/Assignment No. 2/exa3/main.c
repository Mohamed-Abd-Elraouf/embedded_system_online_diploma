/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include<stdio.h>
int main()
{
	float x=0,y=0,z=0;
	printf("Enter three Number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	 if((x>y)&&(x>z))
		 printf("largest num=%1.2f",x);
	 else if((y>x)&&(y>z))
		 printf("largest num=%1.2f",y);
	 else
		 printf("largest num=%1.2f",z);
	return 0;
}

