#include<stdio.h>
int main()
{
int arr[15]={0},*ptr=arr,num=0,i=0;
printf("Input the number of elements to store in the array (max 15) : ");
fflush(stdin);	fflush(stdout);
scanf("%d",&num);
printf("Input %d number of elements in the array :\n",num);
for(i=0;i<num;i++)
{
	printf("element-%d:",i+1);
	fflush(stdin);	fflush(stdout);
	scanf("%d",&arr[i]);
}
printf("The elements of array in reverse order are :\n");
ptr+=num-1;
for(i=num;i>0;i--)
{
	printf("element-%d:%d\n",i,*ptr);
	ptr--;
}

return 0;
}
