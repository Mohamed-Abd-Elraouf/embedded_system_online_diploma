/*
 * EX7:
it is an interview trick
Write Source Code to Swap Two Numbers without temp variable.
 */
#include<stdio.h>
int main()
{
	float a=0,b=0;
	printf("Enter value of a: ");
		fflush(stdin);
		fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b: ");
		fflush(stdin);
		fflush(stdout);
	scanf("%f",&b);

	a=a+b;
	b=a-b;  //value of (a) right now at (b)
	a=a-b;  //value of (b) right now at (a)

	printf("\nAfter swapping, value of a = %1.2f\n",a);
	printf("After swapping, value of b = %1.1f",b);
	return 0;

}
