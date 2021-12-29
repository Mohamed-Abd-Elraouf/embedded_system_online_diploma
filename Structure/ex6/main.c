#include<stdio.h>
#include<string.h>
union job{
	char name[32];
	float salary;
	int worker_no;
}u;
struct job1{
	char name[32];
	float salary;
	int worker_no;
}s;
int main()
{
	printf("size of union:%d",sizeof(u));
	printf("\nsize of struct:%d",sizeof(s));
	return 0;
}

