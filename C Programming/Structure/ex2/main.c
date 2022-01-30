#include<stdio.h>
#include<string.h>
struct Sdistance{
	float feet;
	float inch;
};
int main()
{
	struct Sdistance d1,d2,sum;
	printf("Enter Information for 1st distance\n");
	printf("Enter Feet:");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&d1.feet);
	printf("Enter inch:");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&d1.inch);
	printf("Enter Information for 2nd distance\n");
	printf("Enter Feet:");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&d2.feet);
	printf("Enter inch:");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>12)
	{
		sum.feet+=(int)(sum.inch/12);
		sum.inch=sum.inch-(int)sum.inch;
	}
	printf("sum of distance=%.0f\'%.1f\"",sum.feet,sum.inch);
	return 0;
}

