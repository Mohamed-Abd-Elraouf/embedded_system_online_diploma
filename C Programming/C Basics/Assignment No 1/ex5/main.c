/*Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################
 */
#include<stdio.h>
int main()
{
	char c=0;
	printf("Enter a character: ");
		fflush(stdin);
		fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
	return 0;
}
