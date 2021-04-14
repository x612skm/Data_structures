#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5][5]={0};
	int row=2,col,i,j;
	arr[0][0]=arr[1][0]=arr[1][1]=1;
	while(row<=5)
	{
		arr[row][0]=1;
		for(col=1;col<=row;col++)
		arr[row][col]=arr[row-1][col-1]+arr[row-1][col]; // main logic
		row++;
	}
	for(i=0;i<=5;i++)
	{
	printf("\n");
	for(j=0;j<=i;j++)
	printf("\t %d", arr[i][j]);
	}

return 0;
}
