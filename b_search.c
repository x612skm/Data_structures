#include<stdio.h>
#include<stdlib.h>
void binary_search(int [], int, int, int);
void bubble_sort(int [], int);

int main()
{
	int key, size, i;
	int list[25];

	printf("enter the size of the list : ");
	scanf("%d",&size);
	printf("enter the elements \n ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&list[i]);
	}
	bubble_sort(list,size);
	printf("the sorted array is ");
	for(i=0;i<size;i++)
	printf("%d\t",list[i]);
	printf("\n");
	printf("enter the key to search\n");
	scanf("%d",&key);
	binary_search(list, 0, size, key);
}

void bubble_sort(int list[], int size)
{
	int temp, i, j;
	for(i=0; i<size; i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(list[j]>list[j+1])
			{
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
}

void binary_search(int list[], int lo, int hi, int key)
{
	int mid;
	if(lo>hi)
	{
		printf("key not found\n ");
		return;
	}
	else
	{
	mid= lo + (hi-lo) / 2;
	if(list[mid] == key)
	{
		printf("key found\n");
	}
	else if(list[mid] > key)
	{
		binary_search(list, lo, mid-1, key);
	}
	else if(list[mid] < key)
	{
		binary_search(list, mid+1, hi, key);
	}
	}
}
