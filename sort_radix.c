#include<stdio.h>
#include<stdlib.h>
#define size 20
int largest(int arr[], int n);
void radix_sort(int arr[], int n);
void main()
{
	int arr[size],i,n;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	printf("enter the elements to be sorted : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	radix_sort(arr,n);
	printf("\n the sorted elements are :\n ");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
int largest(int arr[], int n)
{
	int large=arr[0], i;
	for(i=1;i<n;i++)
	{
		if(arr[i]>large)
		large=arr[i];
	}
	return large;
}
void radix_sort(int arr[], int n)
{
	int bucket[size][size], bucket_count[size];
	int i,j,k, remainder, nop=0, divisor=1, large, pass;
	large = largest(arr,n);
	while(large>0)
	{
		nop++;
		large/=size;
	}
	for(pass=0;pass<nop;pass++)// initilising buckets
	{
		for(i=0;i<size;i++)
		bucket_count[i]=0;
		for(i=0;i<n;i++)
		{
//			sort the remainders acc to the digit at the passth place
			remainder=(arr[i]/divisor)%size;
			bucket[remainder][bucket_count[remainder]]=arr[i];
			bucket_count[remainder] += 1;
		}
		// collect the number after the PASS pass
		i=0;
		for(k=0;k<size;k++)
		{
			for(j=0;j<bucket_count[k];j++)
			{
				arr[i] = bucket[k][j];
				i++;
			}
		}
		divisor *= size;
	}
}

