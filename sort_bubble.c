#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,temp,j,arr[10];
	printf("enter the number of elements you want to sort : ");
	scanf("%d",&n);
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//scanning the array elements
	}
	for(i=0;i<n;i++)//for starting the first elements
	{
		for(j=0;j<n-1;j++)//for n-i-1 this is comparing the next element with the previous elements
		// basically this -1 is for 0-3 elements sorting
		//but n-1 is easy and convinient to implement bubble sort tech.
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
printf("the sorted elements of the array are :\n ");
for(i=0;i<n;i++)
{
	printf("%d\t",arr[i]);
}
return 0;
}
