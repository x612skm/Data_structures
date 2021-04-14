//five salesman 3 items
//1.total items sold by each salesman
//2.total items sold by category
#include<stdio.h>
#include<stdlib.h>
int main(){
	int sales[5][3],i,j,total_sales=0;
	//entering data
	printf("enter the data");
	printf("\n************\n");
	for(i=0;i<5;i++)
	{
		printf("enter the sales of the three items for : %d ::: ", i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d", &sales[i][j]);
		}
	}
	//entering sales
	for(i=0;i<5;i++)
	{
		total_sales=0;
		for(j=0;j<3;j++)
		total_sales += sales[i][j];
		printf(" the toal sales by %d\n = %d\n", i+1, total_sales);
	}
	//entering items total
	for(i=0;i<3;i++)
	{
		total_sales=0;
		for(j=0;j<5;j++)
		total_sales+=sales[j][i];
		printf("the total no of item %d\n sold is ::: %d\n", i+1,total_sales);
	}
return 0;
}
