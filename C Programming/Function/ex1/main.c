
#include<stdio.h>
void check_prime(void);
int main()
{
	check_prime();
}
void check_prime(void)
{
	int num_1=0,num_2=0,i=0,check=0;

	printf("Enter two numbers(intervals):");
	fflush(stdin); fflush(stdout);
	scanf("%d%d", &num_1 ,&num_2 );

	i=num_2-num_1;
	check=num_1;

	printf("prime numbers between %d and %d are:",num_1,num_2);
	for(;i>0;i--)
	{
		if(check%2!=0&&check%3!=0&&check%5!=0)
		{
			printf("%d ",check);
		}
		if(check==5)
			printf("%d ",check);
		check++;
	}
}
