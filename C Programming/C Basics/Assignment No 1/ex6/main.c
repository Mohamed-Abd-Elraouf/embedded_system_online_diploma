/*EX6:
Write Source Code to Swap Two Numbers
#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
 */
#include<stdio.h>
int main()
{
	float a=0,b=0,Temp=0;
	printf("Enter value of a: ");
		fflush(stdin);
		fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b: ");
		fflush(stdin);
		fflush(stdout);
	scanf("%f",&b);

	Temp=a;
	a=b;
	b=Temp;

	printf("\nAfter swapping, value of a = %1.2f\n",a);
	printf("After swapping, value of b = %1.1f",b);

	return 0;

}
