#include<stdio.h>
struct employee
{
	int i;
	char name[20];

};
int main()
{
struct employee S={0};
struct employee* arr[5]={&S};;
struct employee*(*ptr)[];
ptr=arr;
(**ptr)->i=1002;
(**ptr)->name[0]='A';
(**ptr)->name[1]='l';
(**ptr)->name[2]='e';
(**ptr)->name[3]='x';
(**ptr)->name[4]='\0';
printf("Employee Name: %s\nEmployee Id:%d",S.name,S.i);
return 0;
}
