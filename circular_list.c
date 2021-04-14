#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);

int main()
{
	int option;
	do
	{
		printf("\t\n****** MAIN MENU FOR CIRCULAR LINKED LIST *******\n");
		printf("\n 1. CREATE ");
		printf("\n 2. DISPLAY ");
		printf("\n 3. INSERT AT BEGINING ");
		printf("\n 4. INSERT AT END ");
		printf("\n 5. DELETE AT BEGINING");
		printf("\n 6. DELETE AT END");
		printf("\n 7. DELETE AFTER ");
		printf("\n 0. EXIT LIKE A B@@S!!! ");
		printf("\n enter your options ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				start=create(start);
				printf("\n circular linked list is created");
				break;
			case 2:
				start=display(start);
				break;
			case 3:
				start=insert_beg(start);
				break;
			case 4:
				start=insert_end(start);
				break;
			case 5:
				start=delete_beg(start);
				break;
			case 6:
				start=delete_end(start);
				break;
			case 7:
				start=delete_after(start);
				break;
		}
	}
	while(option!=0);
return 0;
}
struct node *create(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("enter -1 to end ");
	printf("enter the data ");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			new_node->next=new_node;
			start=new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next!=start)
				ptr=ptr->next;
			ptr->next=new_node;
			new_node->next=start;
		}
		printf("enter the data ");
		scanf("%d",&num);
	}
return start;
}
struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr->next!=start)
	{
		printf("\t %d", ptr->data);
		ptr=ptr->next;
	}
	printf("\t %d",ptr->data);
return start;
}
struct node *insert_beg(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("enter the value to be inserted at begining");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
	ptr=start;
	while(ptr->next!=start)
		ptr=ptr->next;
	ptr->next=new_node;
	new_node->next=start;
	start=new_node;
return start;
}
struct node *insert_end(struct node *start)
{
        struct node *new_node,*ptr;
        int num;
        printf("enter the value to be inserted at end");
        scanf("%d",&num);
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->data=num;
        ptr=start;
        while(ptr->next!=start)
                ptr=ptr->next;
        ptr->next=new_node;
        new_node->next=start;
return start;
}
struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr->next!=start)
	{
		ptr=ptr->next;
	}
	ptr->next=start->next;
	free(start);
	start=ptr->next;
return start;
}
struct node *delete_end(struct node *start)
{
	struct node *ptr,*preptr;
	ptr=start;
	while(ptr->next!=start)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=start;
	free (ptr);
return start;
}
struct node *delete_after(struct node *start)
{
	struct node *ptr,*preptr;
	int val;
	printf("enter the value after which the node you wish to delete ");
	scanf("%d",&val);
	ptr=start;
	preptr=ptr;
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	if(ptr==start)
	{
		start=preptr->next;// this terms as preptr=ptr declared above so that start=ptr->next and delete itself
	}
	free(ptr);
return start;
}

/*common logic used is
ptr=start;
while(ptr!=start)
ptr=ptr->next
ptr->next=new_node;
start=new_node;//for insertion at beg
new_node->next=start;//for insertion at end
*/
