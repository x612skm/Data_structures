#include<stdio.h>
int main()
{
	int i=0,j,length=0; //you have to assign the values of i and length here as from inital
	char str[20];
		printf("enter the word or data  ");
		scanf("%s", &str[i]);
		while(str[i]!='\0')
		{
			length++;
			i++;
		}
		i=0;
		j=length-1;//value of j assigned ; length assigned as 0 above
		while(i<=length/2)
		{
			if(str[i]==str[j])
			{
				i++;
				j--;
			}
			else
				break;
		}
		if(i>=j)
			printf("\npalindrome");
		else
			printf("\nnot a palindrome");
printf("\n");
return 0;
}
