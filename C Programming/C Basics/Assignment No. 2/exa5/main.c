/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include<stdio.h>
int main()
{
	char x=0;
	printf("Enter a character:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);

	 if(x>='a'&&x<='z')
		 printf("%c is an alphabet ",x);
	 else if(x>='A'&&x<='Z')
		 printf("%c is an alphabet ",x);
	 else
		 printf("%c is not an alphabet ",x);
	return 0;
}

