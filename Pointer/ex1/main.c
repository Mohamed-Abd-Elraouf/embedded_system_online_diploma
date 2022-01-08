#include<stdio.h>
struct Svariable{
	long long location;
	int value;
};
int main()
{
struct Svariable v,*ab;
v.location=0x7ffcc3ad291c;
v.value=29;
printf("Address of m : 0x%llx\n", v.location );
printf("Value of m : %d\n", v.value );
printf("Now ab is assigned with the address of m.\n");
ab=&v;
printf("Address of pointer ab : 0x%llx\n",ab->location);
printf("Content of pointer ab : %d\n",ab->value);
v.value=34;
printf("The value of m assigned to 34 now.\n");
printf("Address of pointer ab : 0x%llx\n",ab->location);
printf("Content of pointer ab : %d\n",ab->value);
ab->value=7;
printf("The pointer variable ab is assigned with the\n value 7 now.\n");
printf("Address of m : 0x%llx\n", v.location );
printf("Value of m : %d\n", v.value );




return 0;
}
