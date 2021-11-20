/*EX3:
Write C Program to Add Two Integers
##########Console-output###
Enter two integers: 12
11
Sum: 23
 */
#include<stdio.h>
int main()
{
	int x=0,y=0;
	printf("Enter two integers: ");
		fflush(stdin);
		fflush(stdout);
	scanf("%d",&x);
		fflush(stdin);
		fflush(stdout);
	scanf("%d",&y);
	printf("sum: %d",x+y);
	return 0;
}
