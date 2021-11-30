
#include<stdio.h>
int main()
{
	float arr_1[2][2]={{0,0}};
	float arr_2[2][2]={{0,0}};
	int i=0,j=0;

	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);	fflush(stdout);
			scanf("%f",&arr_1[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdin);	fflush(stdout);
			scanf("%f",&arr_2[i][j]);
		}
	}

	printf("Sum Of Matrix:\n");
	printf("%.1f\t%.1f\n",(arr_1[0][0]+arr_2[0][0]),(arr_1[0][1]+arr_2[0][1]));
	printf("%.1f\t%.1f",(arr_1[1][0]+arr_2[1][0]),(arr_1[1][1]+arr_2[1][1]));
	return 0;
}
