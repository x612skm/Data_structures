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
struct node *insert_bef(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_node(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);
int main(int argc, char *argu[])
{
	int option;
	do
	{
		printf("\n\n ******** main menu *******");
		printf("\n 1 . CREATE ");
		printf("\n 2. display ");
		printf("\n 3. INSERT NODE AT BEG ");
		printf("\n 4. INSERT NODE AT END ");
		printf("\n 5. INSERT NODE BEFORE A GIVEN NODE ");
		printf("\n 6. INSERT NODE AFTER A GIVEN NODE ");
		printf("\n 7. DELETE A NODE FROM BEGINING ");
		printf("\n 8. DELETE A NODE FROM END ");
		printf("\n 9. DELETE A NODE FROM AFTER A NODE ");
		printf("\n 10.DELETE ANY NODE ");
		printf("\n 11.DELETE THE ENTIRE LIST  ");
		printf("\n 12.SORT THE LIST ");
		printf("\n 0. EXIT LIKE A BOSS ENTER ZERO ");
		printf("\nenter your choice : ");
		scanf("%d",&option);
			switch(option)
			{
				case 1:
					start=create(start);
					printf("the linked list is created ");
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
					start=insert_bef(start);
					break;
				case 6:
					start=insert_after(start);
					break;
				case 7:
					start=delete_beg(start);
			 		break;
				case 8:
					start=delete_end(start);
					break;
				case 9:
					start=delete_after(start);
					break;
				case 10:
					start=delete_node(start);
					break;
				case 11:
					start=delete_list(start);
					break;
				case 12:
					start=sort_list(start);
					break;
			}
	}while(option!=0);

return 0;
}
struct node *create(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("enter -1 to end\n ");
	printf("enter the data : ");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
				ptr=ptr->next;
			ptr->next=new_node;
			new_node->next=NULL;
		}
		printf("\n enter the data ");
		scanf("%d",&num);
	}
	return start;
}

struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("  |%d|\t|->", ptr->data);
		ptr=ptr->next;
	}
return start;
}

struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	printf("enter the data ");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=start;
	start=new_node;
return start;
}
struct node *insert_end(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("enter the data");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->next=new_node;
return start;
}
struct node *insert_bef(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num, val;
	printf("enter the data ");
	scanf("%d",&num);
	printf("enter the value before which it is to be inserted : ");
	scanf("%d",&val);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
	ptr=start;
	while(ptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=new_node;
	new_node->next=ptr;
return start;
}
struct node *insert_after(struct node *start)
{
	struct node *new_node,*ptr,*preptr;
	int num,val;
	printf("enter the data ");
	scanf("%d",&num);
	printf("enter the value after which the data will be inserted ");
	scanf("%d",&val);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
	ptr=start;
	preptr=ptr;
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=new_node;
	new_node->next=ptr;
return start;
}
struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr=start;
	start=start->next;
	free(ptr);
return start;
}
struct node *delete_end(struct node *start)
{
	struct node *preptr, *ptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
return start;
}
struct node *delete_after(struct node *start)
{
	struct node *ptr, *preptr;
	int val;
	printf("enter the value after you want to delete ");
	scanf("%d",&val);
	ptr=start;
	preptr=ptr;
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}

	preptr->next=ptr->next;
	free(ptr);
return start;
}
struct node *delete_node(struct node *start)
{
	struct node *preptr, *ptr;
	int val;
	printf("enter the value you want to delete ");
	scanf("%d",&val);
	ptr=start;
	if(ptr->data==val)
	{
		start=delete_beg(start);
		return start;
	}
	else
	{
		while(ptr->data!=val)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=ptr->next;
		free(ptr);
	return start;
	}
}
struct node *delete_list(struct node *start)
{
	struct node *ptr;
	if(start!=NULL)
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("\n %d is to be deleted next ", ptr->data);
			start=delete_beg(ptr);
			ptr=start;
		}
	}
return start;
}
struct node *sort_list(struct node *start)
{
	struct node *ptr1, *ptr2;
	int temp;
	ptr1=start;
	while(ptr1->next!=NULL)
	{
		ptr2=ptr1->next;
		while(ptr2!=NULL)
		{
			if(ptr1->data > ptr2->data)
			{
				temp=ptr1->data;
				ptr1->data = ptr2->data;
				ptr2->data=temp;
			}
		ptr2=ptr2->next;
		}
	ptr1=ptr1->next;
	}
return start;
}
