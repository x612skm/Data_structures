#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
};
void display (struct student *);
int main()
{
	struct student *ptr_stud;
	ptr_stud=(struct student *)malloc(sizeof(struct student));
	printf("enter the data of the pointer :\n ");
	printf("enter the roll\t");
	scanf("%d",&ptr_stud->roll);
	display(ptr_stud);
return 0;
}
void display(struct student *ptr_stud)
{
	printf("display the data\n ");
	printf("the rolll no is %d", ptr_stud->roll);
	printf("\n");
}

