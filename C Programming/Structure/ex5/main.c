#include<stdio.h>
#define area(r) (PI*(r*r))
#define PI 3.141
int main()
{
	int x=0;
	printf("Enter The Raduis:");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&x);
	printf("Area=%0.2lf",area(x));
	return 0;
}

