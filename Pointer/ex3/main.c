#include<stdio.h>
int main()
{
char arr[50]={0},*ptr=arr;
int i=0;

printf("Input astring :");
fflush(stdin);	fflush(stdout);
fgets(arr,50,stdin);
printf("Reverse of the string is : ");
for(;i<50;i++)
{
	if(*ptr=='\0')
		break;
	ptr++;
}
/* will minus two because pointer
 * is at null and before  null(enter key)
 */
ptr-=2;
i--;
for(;i>=0;i--)
{
	printf("%c",*ptr);
	ptr--;
}

return 0;
}
