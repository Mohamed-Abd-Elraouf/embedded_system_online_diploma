
#include<stdio.h>
#include<string.h>
void reverse(char*,int str_length);
int main()
{
	char str[20]={0};
	printf("Enter a sentence:");
	fflush(stdin);	fflush(stdout);
	gets(str);
	reverse(str,strlen(str)-1);

	return 0;
}

void reverse(char* x,int str_length)
{
	printf("%c",x[str_length]);
	if(str_length>0)
	{
		reverse(x,str_length-1);
	}
}
