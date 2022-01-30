
#include<stdio.h>
int main()
{
	int arr[20]={0},element=0,i=0,check=0;
	printf("Enter No of element: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&element);
	for(i=0;i<element;i++)
	{
		arr[i]=(i+11)+(10*i);
		printf("%d ",arr[i]);
	}
	printf("\nEnter the elements to be searched: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&check);

	for(i=0;i<element;i++)
	{
		if(arr[i]==check)
			break;
	}
	printf("number found at location=%d",i+1);
	return 0;
}
