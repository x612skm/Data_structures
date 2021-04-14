#include<stdio.h>
#include<stdlib.h>
int stk[10];
int top=-1;
int pop();
void push(int);
int main()
{
	int val,n,i;
        int arr[10];
	printf("enter the number of elements : ");
	scanf("%d",&n);
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		push(arr[i]);
	}
	for(i=0;i<n;i++)
	{
		val=pop();
		arr[i]=val;
	}
	printf("the reversed array is : ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
return 0;
}
void push(int val)
{
	stk[++top]=val;
}
int pop()
{
	return (stk[top--]);
}

