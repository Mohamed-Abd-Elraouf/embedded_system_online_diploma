
#include<stdio.h>
int main()
{
	float x[10],aver=0;
	int i=0,z=0;
	printf("Enter The Number Of Data:");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&z);

	for(i=0;i<z;i++)
	{
		printf("%d. Enter Number: ",i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%f",&x[i]);
		aver+=x[i];
	}

	printf("average=%.2f",aver/z);

	return 0;
}
