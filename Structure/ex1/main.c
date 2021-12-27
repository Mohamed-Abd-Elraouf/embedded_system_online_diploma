#include<stdio.h>
#include<string.h>
struct Sstudent{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct Sstudent s;

	printf("Enter Information of students:\n\n");

	printf("Enter Name:");
	fflush(stdin);	fflush(stdout);
	fgets(s.name,20,stdin);

	printf("Enter roll number:");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&s.roll);

	printf("Enter marks:");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&s.marks);

	fflush(stdin);		fflush(stdout);
	printf("\nDisplaying information\n\nname:%sRoll:%d\nMarks: %.2f",s.name,s.roll,s.marks);

	return 0;
}

