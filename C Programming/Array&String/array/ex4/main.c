
#include<stdio.h>
int main()
{
	int arr[20]={0},i=0,x=0,elem=0,location=0;
	printf("enter no of elements: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		arr[i]=i+1;
		printf("%d ",arr[i]);
	}
	printf("\nenter the element to be inserted: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&elem);

	printf("enter the location: ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&location);

	for(i=x;i>=(location-1);i--)
	{
		arr[i]=arr[i-1];
		if(i==(location-1))
			arr[i]=elem;
	}
	for(i=0;i<=x;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
