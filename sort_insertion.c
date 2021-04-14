#include<stdio.h>
#include<stdlib.h>
#define size 10
void insertion_sort(int arr[], int n);
void main()
{
	int arr[size],i,n;
	printf("enter the no of elements you want to sort : ");
	scanf("%d",&n);
	printf("\n enter the elements for sorting ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	printf("\n the sorted elements are : ");
	for(i=0;i<n;i++)
	printf("%d\t", arr[i]);
printf("\n");
}
void insertion_sort(int arr[], int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}
