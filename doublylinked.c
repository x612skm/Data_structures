#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_before(struct node *);
struct node *delete_list(struct node *);

int main()
{
	int option;
	do
	{
		printf("\n*********MAIN MENU************\n");
		printf("\n DOUBLY LINKED LIST ");
		printf("\n 1. CREATE THE LINKED LIST ");
		printf("\n 2. DISPLAY ");
		printf("\n 3. INSERT AT BEGINING ");
		printf("\n 4. INSERT AT END ");
		printf("\n 5. INSERT A NODE AFTER A NODE ");
		printf("\n 6. DELETE A NODE AT BEGINING ");
		printf("\n 7. DELETE A NODE AT THE END ");
		printf("\n 8. DELETE A NODE AFTER A NODE ");
		printf("\n 9. DELETE A NODE BEFORE A NODE ");
		printf("\n 10.DELETE THE ENTIRE LIST ");
		printf("\n 0. EXIT LIKE A BOSS DUDE !!!");
		printf("\n ENTER YOU CHOICE ");
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				start=create(start);
				printf("linked list is created");
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
				start=insert_after(start);
				break;
			case 6:
				start=delete_beg(start);
				break;
			case 7:
				start=delete_end(start);
				break;
			case 8:
				start=delete_after(start);
				break;
			case 9:
				start=delete_before(start);
				break;
			case 10:
				start=delete_list(start);
				break;
			}
	}while(option!=0);
return 0;
}
struct node *create(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("enter -1 to end the process ");
	printf("enter the data to be inserted into the list ");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			//new_node=(struct node *)malloc(sizeof(struct node));
			new_node->prev=NULL;
			//new_node->data=num;
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			//new_node=(struct node *)malloc(sizeof(struct node));
			//new_node->data=num;
			while(ptr->next!=NULL)
			{
				ptr->next=new_node;
			}
				new_node->prev=ptr;
				new_node->next=NULL;
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
	while(ptr!=NULL)
	{
		printf("\t %d",ptr->data);
		ptr=ptr->next;
	}

return start;
}
struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	printf("enter the value to be inserted");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
	start->prev=new_node;
	new_node->next=start;
	new_node->prev=NULL;
	start=new_node;
return start;
}

struct node *insert_end(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("enter the value you want to insert ");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	new_node->prev=ptr;
	new_node->next=NULL;
return start;
}
struct node *insert_after(struct node *start)
{
	struct node *new_node,*ptr;
	int num,val;
	printf("enter the value  you want to insert the node after  ");
	scanf("%d",&val);
	printf("enter the value you want to insert ");
	scanf("%d",&num);
	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=num;
	ptr=start;
	while(ptr->data!=val)
	{
		ptr=ptr->next;
	}
	new_node->prev=ptr;
	new_node->next=ptr->next;
	ptr->next->prev=new_node;
	ptr->next=new_node;
return start;
}
struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr=start;
	start=start->next;
	start->prev=NULL;
	free(ptr);
return start;
}
struct node *delete_end(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->prev->next=NULL;
	free(ptr);
return start;
}
struct node *delete_after(struct node *start)
{
	struct node *ptr,*temp;
	int val;
	printf("enter the data part of the node after which you want to delete ");
	scanf("%d",&val);
	ptr=start;
	while(ptr->data!=val)
	{
		ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=temp->next;
	temp->next->prev=ptr;
	free(temp);
return start;
}
struct node *delete_before(struct node *start)
{
	struct node *ptr,*temp;
	int val;
	printf("enter the data of the node before which you want to delete ");
	scanf("%d",&val);
	ptr=start;
	while(ptr->data!=val);
	{
		ptr=ptr->next;
	}
	temp=ptr->prev;
	if(temp==start)
	{
		start=delete_beg(start);
	}
	else
	{
		ptr->prev=temp->prev;
		temp->prev->next=ptr;
	}
	free(temp);
return start;
}
struct node *delete_list(struct node *start)
{
	while(start!=NULL)
		start=delete_beg(start);
	return start;
}
