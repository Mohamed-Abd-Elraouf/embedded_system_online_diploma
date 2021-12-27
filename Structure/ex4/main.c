#include<stdio.h>
#include<string.h>
struct Sstudent{
	int roll;
	char name[20];
	int marks;
};
int main()
{
	struct Sstudent arr[10];
	int i=0;
	printf("Enter information of student:\n");
	for(i=0;i<10;i++)
	{
		printf("\nEnter roll number ");
		fflush(stdin);	fflush(stdout);
		scanf("%d",&arr[i].roll);

		printf("Enter name: ");
		fflush(stdin);	fflush(stdout);
		fgets(arr[i].name,20,stdin);

		printf("Enter marks : ");
		fflush(stdin);	fflush(stdout);
		scanf("%d",&arr[i].marks);
	}
	printf("\nDisplay information of student:\n");
	for(i=0;i<10;i++)
	{
		printf("\nInforamtion for roll number %d: \n",arr[i].roll);
		printf("Name: %s",arr[i].name);
		printf("Marks :%d ",arr[i].marks);

	}
	return 0;
}

