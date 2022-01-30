
#include<stdio.h>
int factorial(int num);
int main()
{
	int num=0,res=0;
	printf("Enter an positive integer:");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&num);
	res=factorial(num);
	printf("factorial of %d is:%d",num,res);
	return 0;
}
int factorial(int z)
{
	int res=1;
	if(z!=0)
		res=z*factorial(z-1);
	return res;
}
