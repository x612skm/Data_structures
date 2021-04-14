
#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll;
	char name[10];
	char course[10];
	int fees;
	};
	struct student *ptr_stud[20];
int main()
{	int i,n;
	printf("\nenter the number of  students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	ptr_stud[i]=(struct student *)malloc(sizeof(struct student));
	printf("\nenter the data of the students :%d ",i+1);
	printf("enter the roll of the student : ");
	scanf("%d",&ptr_stud[i]->roll);
	printf("enter the name of the student : ");
	scanf("%s",&ptr_stud[i]->name);
	printf("enter the course of the student : ");
	scanf("%s",&ptr_stud[i]->course);
	printf("enter the fees of the student : ");
	scanf("%d",&ptr_stud[i]->fees);
	}
	printf("\ndetails of the student :");
	for(i=0;i<n;i++)
		{
		printf(" \nthe roll no is %d ",  ptr_stud[i]->roll);
		printf("\n the name is %s ", ptr_stud[i]->name);
		printf("\n the course is %s ", ptr_stud[i]->course);
		printf("\n the fees is %d ", ptr_stud[i]->fees);
		}
printf("\n");
return 0;
}
