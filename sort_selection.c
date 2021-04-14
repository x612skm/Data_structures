//selection sort
#include<stdio.h>
#include<stdlib.h>

#define size 10

int smallest(int arr[], int k, int n);
void selection_sort(int arr[], int n);

void main()
{
	int arr[10],i,n;
	printf("\n enter the number of elements you want to insert : ");
	scanf("%d",&n);
	printf("\n enter the elements of the array : ");
	for(i=0;i<n;i++)//elements=0;elements<numbers;elements++
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	printf("\n the sorted array is : \n ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int smallest(int arr[], int k, int n)
{
	int pos=k, small=arr[k],i;
	for(i=k+1;i<n;i++)// initialising k as positon of the element in the respective loop
	{
		if(arr[i]<small)//if the sorting number is the smalllest number 
		{
			small=arr[i];
			pos=i;
		}
	}
return pos;
}
void selection_sort(int arr[], int n)
{
	int k, pos, temp;
	for(k=0;k<n;k++)// reading the loop to sort 
	{
		pos=smallest(arr,k,n);
		temp=arr[k];//three magical lines for sorting
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}
