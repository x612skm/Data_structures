//this is not inserting of string this is replacing the string and insert in that postion
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,k=0,pos;
	char str[50],text[50], new_str[50];
	printf("enter your sentnce :");
	//scanf("%s",&text[i]);
	gets(text);
	printf("enter the text you want to insert : ");
	scanf("%s",&str[k]);
	printf("enter the positon you want to insert:  ");
	scanf("%d",&pos);
	while(text[i]!='\0')
	{
		if(i==pos)
		{
			while(str[k]!='\0')
			{
				new_str[j]=str[k];
				j++;
				k++;
			}
		}
		else
		{
			new_str[j]=text[i];
			j++;
		}
	i++;
	}
	new_str[j]='\0';
	printf("deesired string is %s", new_str);
//	puts(new_str);
	printf("\n");
return 0;
}


/*#include <stdio.h>

int main()
{
char text[100], str[20], ins_text[100];
int i=0, j=0, k=0,pos;

printf("\n Enter the main text : ");
gets(text);
printf("\n Enter the string to be inserted : ");
gets(str);
printf("\n Enter the position at which the string has to be inserted: ");
scanf("%d", &pos);
while(text[i] != '\0')
{
	if(i==pos)
	{
		while(str[k] != '\0')
		{

		ins_text[j] = str[k];

			j++;
			k++;

		}

	}
	else
	{

	ins_text[j] = text[i];

	j++;

	}
	i++;
}
	ins_text[j] = '\0';
	printf("\n The new string is : ");
	puts(ins_text);

return 0;
}
*/
