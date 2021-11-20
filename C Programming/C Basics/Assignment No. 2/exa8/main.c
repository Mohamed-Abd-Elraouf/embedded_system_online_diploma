#include<stdio.h>
int main()
{
	float x=0,y=0;
	char operation=0;
	printf("Enter operator either + or - or * or divide:-  ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operation);
	printf("Enter two operands:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	switch(operation)
	{
		case '+':
		{
			printf("%1.1f%c%1.1f=%1.1f",x,operation,y,x+y);
		}
		break;
		case '-':
		{
			printf("%1.1f%c%1.1f=%1.1f",x,operation,y,x-y);
		}
		break;
		case '*':
		{
			printf("%1.1f%c%1.1f=%1.1f",x,operation,y,x*y);
		}
		break;
		case '/':
		{
			printf("%1.1f%c%1.1f=%1.1f",x,operation,y,x/y);
		}
		break;
	}
	return 0;
}

