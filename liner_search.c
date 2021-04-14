#include<stdio.h>
#include<stdlib.h>
#define size 20 //for the size of the array
int main()
{
	int arr[size],num,i,n,found=0,pos=1;
	printf("enter the number of elements of the array : ");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n ENTER THE NUMBER THAT HAS TO BE SEARCHED : ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(arr[i] == num)
		{
			found=1;
			pos=i;
			printf("\n %d the number is found in the array at positon == %d",num,i+1);
		//+1 added to give the actual position array as postion 1 not as 0
		//if it has to be found in the array th positon then remove the +1
		//then it will count from 0th postion
		break;
		}
	}
	if(found == 0)
	{
		printf("\n %d does not exist in the array ", num);
		return 0;
	}

}
