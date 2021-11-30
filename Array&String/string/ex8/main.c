
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100]={0},i=0,len=0,temp[100]={0};

	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(arr);
	len=strlen(arr);

	for(i=0;i<len;i++)
	{
		temp[i]=arr[len-i-1];
	}
	printf("reverse string is:%s",temp);



	return 0;
}
