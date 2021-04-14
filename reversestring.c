//reverse of a string
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char str[50],temp;
	printf("enter the string : ");
	scanf("%s", &str[i]);
	int j=strlen(str)-1;
	while(i<j)
	{
		temp=str[j];	//temp is used in place of swap in code
		str[j]=str[i];
		str[i]=temp;
	i++;
	j--;
	}
	printf("the final string is  %s :", str );
return 0;
}
