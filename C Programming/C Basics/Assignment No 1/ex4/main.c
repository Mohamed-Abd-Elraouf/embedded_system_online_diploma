/*EX3:
Write C Program to Multiply two Floating Point Numbers
##########Console-output###
Enter two numbers: 2.4
1.1
Product: 2.640000
 */
#include<stdio.h>
int main()
{
	float x=0,y=0;
	printf("Enter two numbers: ");
		fflush(stdin);
		fflush(stdout);
	scanf("%f",&x);
		fflush(stdin);
		fflush(stdout);
	scanf("%f",&y);
	printf("product: %f",x*y);
	return 0;
}
