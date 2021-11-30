
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100]={0},ch=0,i=0,count=0;
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(arr);
	printf("Enter a character to find frequency:");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&ch);
	for(i=0;i<strlen(arr);i++)
		{
			if(arr[i]==ch)
			{
				count++;
			}
		}
	printf("Frequency of %c=%d",ch,count);

	return 0;
}
