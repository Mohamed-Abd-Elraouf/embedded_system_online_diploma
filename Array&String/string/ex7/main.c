
#include<stdio.h>
int main()
{
	char arr[100]={0},i=0,count=0;

	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(arr);

	for(i=0;i<100;i++)
		{
			if(arr[i]!='\0')
				{
					count++;
				}
			else
				{
					break;
				}
		}
	printf("length of string:%d",count);


	return 0;
}
