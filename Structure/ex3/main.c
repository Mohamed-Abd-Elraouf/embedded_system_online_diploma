#include<stdio.h>
#include<string.h>
struct Snumber{
	float real;
	float imaginary;
};
struct Snumber fun(struct Snumber a,struct Snumber b);
int main()
{
	struct Snumber n1,n2,res;
	printf("Enter  1st complex number\n");
	printf("Enter real and imaginary respectivaly:");
	fflush(stdin);	fflush(stdout);
	scanf("%f%f",&n1.real,&n1.imaginary);

	printf("Enter  2nd complex number\n");
	printf("Enter real and imaginary respectivaly:");
	fflush(stdin);	fflush(stdout);
	scanf("%f%f",&n2.real,&n2.imaginary);
	res=fun(n1,n2);
	printf("sum=%.1f+%.1fi",res.real,res.imaginary);
	return 0;
}

struct Snumber fun(struct Snumber a,struct Snumber b)
{
	struct Snumber z;
	z.real=a.real+b.real;
	z.imaginary=a.imaginary+b.imaginary;
	return z;
}
