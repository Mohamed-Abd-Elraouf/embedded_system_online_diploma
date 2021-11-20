/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include<stdio.h>
int main()
{
	char arr[]="aeiou";
	char c=0;
	int i=0;
	printf("Enter an Alphabet:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	for(;i<5;i++)
	{
		if(c==arr[i])
		{
			printf("%c is vowel",c);
			break;
		}
	}
	if(i==5)
	{
		printf("%c is consonant",c);
	}
	return 0;
}

