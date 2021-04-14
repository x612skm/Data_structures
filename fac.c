//factorial using recurssion
#include<stdio.h>
#include<stdlib.h>
int fact(int);	//function declaration
int main()
{
	int num,val;
	printf("enter the number whose factorial:");
	scanf("%d",&num);
	val=fact(num);
	printf("FACTORIAL OF %d is : %d ", num, val);
return 0;
}
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return (n*fact(n-1));
}
