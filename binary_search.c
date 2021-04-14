// binary search technique
//first it sort the elements and then it search according to our desired input

#include<stdio.h>
#include<stdlib.h>
#define size 20

int smallest(int arr[], int k, int n );
void selection_sort(int arr[], int n);

int main()
{
	int n,arr[size], i, beg, mid, found=0,end,num;
	printf("\n enter the number of elements in the array ");
	scanf("%d",&n);
	printf("\nenter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);// added to sort the array
	printf("\n the sorted array : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("enter the element that has to be searched : ");
	scanf("%d",&num);
	beg=0,end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid] == num)
		{
			printf("\n %d is present in the array at positon %d", num, mid+1);
			found=1;
			break;
		}

		else if(arr[mid]>num)
		end=mid-1;
		else
		beg=mid+1;
	}
	if(beg>end && found == 0)
	printf("\n %d does not exist in the array ", num);
	return 0;
}
int smallest(int arr[], int k, int n)
{
	int pos=k, small=arr[k],i;
	for(i=k+1;i<n;i++)
	{
		if(arr[i]<=small)
		{
			small=arr[i];
			pos=i;
		}
	}
	return pos;
}
void selection_sort(int arr[], int n)
{
	int k,pos,temp;
	for(k=0;k<n;k++)
	{
		pos=smallest(arr,k,n);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}
