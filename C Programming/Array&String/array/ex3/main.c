
#include<stdio.h>
int main()
{
	int arr[10][10]={{0}},temp[10][10];
	int row=0,col=0,i=0,j=0;
	printf("Enter rows and column of matrix:");
	fflush(stdin);	fflush(stdout);
	scanf("%d%d",&row,&col);
	printf("Enter elements of matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin);	fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{

				temp[j][i]=arr[i][j];

		}
	}
	printf("Entered Matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");

	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{

			printf("%d\t",temp[i][j]);

		}
		printf("\n\n");
	}


	return 0;
}
