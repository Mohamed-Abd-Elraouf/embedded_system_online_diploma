#include<stdio.h>
int power(int,int);
int main()
{
	int base_number=0,power_number=0,res=0;

	printf("Enter base number:");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&base_number);

	printf("Enter Power number(positive integer):");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&power_number);
	res=power(base_number,power_number);
	printf("%d^%d=%d",base_number,power_number,res);
	return 0;
}

int power(int base,int p)
{
	if(p==0)
	{
		return 1;
	}
	if(p>0)
	{
		return base * power(base,p-1);
	}
}
