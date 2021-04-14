#include<stdio.h>
#include<stdlib.h>

#define size 100
void merge(int a[], int ,int, int);
void merge_sort(int a[], int, int);
void main()
{//entering input data
	int arr[size],i,n;
	printf("\n enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\n enter the elemets of the array:  ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);// arr gives the size and 0 is the initial and n-1 is the scanning except the biggest
	printf("\n the sorted array is : \n ");
	for(i=0;i<n;i++)//loop for scanning it is not i<=n so that it will print back the input i.r no need
	printf("%d\t",arr[i]);//print statement for output
}
void merge(int arr[], int beg, int mid, int end)
{	//let we read that by partioning into half
    	int i=beg,j=mid+1, index=beg, temp[size], k;
   	while((i<=mid) && (j<=end)) //taking input for the left unit
	// wecant take j>end it will overflow and i>mid it will only scan right
  	{
 		if(arr[i]<arr[j])//comparing two array simultaneously
 		{
 			temp[index]=arr[i];//scanning the leftest element as i
 			i++;
 		}
 		else
 		{
 			temp[index]=arr[j];//scanning the right element as j
 			j++;
 		}
 		index++;
	}
	if(i>mid)	//taking input for the right element
 	{
		while(j<=end)//middle right to end
 		{
 			temp[index]=arr[j];
 			j++;
 			index++;//comparing the index element with the rightest end element
 		}
 	}
	else
	{
		while(i<=mid) //comparing the left element to the centre
		{
			temp[index]=arr[i];
			i++;
			index++; //comparing the initial element with the half middle left element
		}
	}
	for(k=beg;k<index;k++) //creating a looping for k=beg initialization and k<index so that index as the size
	arr[k]=temp[k];
}
void merge_sort(int arr[],int beg, int end)
{
	int mid;
	if(beg<end)// if end<beg it will give a overflow statement
	{
		mid=(beg+end)/2; // declared at later for the value of mid in the main case
		merge_sort(arr, beg, mid);
		merge_sort(arr,mid+1,end);//mid+1 is the element after the mid element for the right side case
		merge(arr,beg, mid, end);//total containg array size no index is use upon here as defined as void fn.
	}
}
