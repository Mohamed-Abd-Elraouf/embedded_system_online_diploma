#include<stdio.h>
int main()
{
char * ptr=(char*)65;
int i=0;
for(i=0;i<26;i++)
{
	if(i<16)
	{
		printf("  %c",ptr);
	}

	if(i==16)
	{
		printf("\n");
	}
	if(i>16)
	{
		printf(" %c ",ptr);
	}
	ptr++;
}
return 0;
}
