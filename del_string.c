#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,n=0,k=0,copy_loop=0;
	char text[20],new_str[20],str[20];
	printf("input the string\n");
	scanf("%s",&text[i]);
	printf("enter the string you want to delete ");
	scanf("%s",&str[n]);
	while(text[i]!='\0')
	{	n=0,k=i;
		while(text[k]==str[n] && str[n]!='\0')
		{
			k++;
			n++;
		}

		if(str[n]=='\0')
			copy_loop=k;
			new_str[j]=text[copy_loop];
			i++;
			copy_loop++;
			j++;

	}

	new_str[j]='\0';
	printf("the string is : %s  ", new_str);
	printf("\n");
return 0;
}
/*
#include <stdio.h>

int main()
{
	char text[200], str[20], new_text[200];
	int i=0, j=0,  k, n=0, copy_loop=0;

	printf("\n Enter the main text : ");
	gets(text);
	printf("\n Enter the string to be deleted : ");
	gets(str);
		while(text[i]!='\0')
		{
			j=0,k=i;
			while(text[k]==str[j] && str[j]!='\0')
			{
			k++;
			j++;

			}
			if(str[j]=='\0')
			copy_loop=k;
			new_text[n] = text[copy_loop];
			i++;
			copy_loop++;
			n++;
		}
new_text[n]='\0';
printf("\n The new string is : ");
puts(new_text);

return 0;
}
*/
