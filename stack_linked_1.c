#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
struct stack *push(struct stack *, int);
struct stack *pop(struct stack *);
struct stack *display(struct stack *);

int main()
{
	int option,val;
	do
	{
		printf("****** MAIN MENU ******");
		printf("\n 1. PUSH ");
		printf("\n 2. PoP ");
		printf("\n 3. DISPLAY ");
		printf("\n 4. EXIT !!! ");
		printf("\n ENTER YOUR CHOICE ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("the the number to be pushed onto the stack : ");
				scanf("%d",&val);
				top=push(top,val);
				break;
			case 2:
				top=pop(top);
				break;
			case 3:
				top=display(top);
				break;
		}
	}while(option!=4);
return 0;
}
struct stack *push(struct stack *top,int val)
{
	struct stack *ptr;
	ptr=(struct stack *)malloc(sizeof(struct stack));
	ptr->data=val;
	if(top==NULL)
	{
		ptr->next=NULL;
		top=ptr;
	}
	else
	{
		ptr->next=top;
		top=ptr;
	}
return top;
}
struct stack *pop(struct stack *top)
{
	struct stack *ptr;
	ptr=top;
	if(top==NULL)
	{
		printf("UNDERFLOW");
	}
	else
	{
		top=top->next;
		printf("the popped out element is %d", ptr->data);
		free(ptr);
	}
return top;
}
struct stack
