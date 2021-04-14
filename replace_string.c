//replacing of string
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,k=0,n=0,copy_loop=0,r_index=0;
	char str[50],t_str[50],r_str[50],new_str[50];
	printf("enter the string :");
	//scanf("%s",&str[i]);
	gets(str);
	printf("enter the pattern to be replaced ");
	scanf("%s",&t_str[j]);
	//gets(t_str);
	printf("enter the text it is to be replaced with :");
	scanf("%s",&r_str[r_index]);
	//gets(r_str);
	while(str[i]!='\0')
	{
		j=0,k=i;
		while(str[k]==t_str[j] && t_str[j]!='\0')
		{
			k++;
			j++;
		}
		if(t_str[j]=='\0')
		{
			copy_loop=k;
			while(r_str[r_index] != '\0')
			{

				new_str[n]=r_str[r_index];
				r_index++;
				n++;
			}
		}//copy_loop=k;
			new_str[n]=str[copy_loop];
			i++;
			copy_loop++;
			n++;
	}
	new_str[n]=='\0';
	printf("final result :: %s ", new_str);
	printf("\n");
return 0;
}
/*
#include <stdio.h>

main()
{
char str[200], pat[20], new_str[200], rep_pat[100];
int i=0, j=0, k, n=0, copy_loop=0, rep_index=0;

printf("\n Enter the string : ");
gets(str);
printf("\n Enter the pattern to be replaced: ");
gets(pat);
printf("\n Enter the replacing pattern: ");
gets(rep_pat);
while(str[i]!='\0')
{

j=0,k=i;

while(str[k]==pat[j] && pat[j]!='\0')
{
k++;

j++;
}

if(pat[j]=='\0')
{

copy_loop=k;

while(rep_pat[rep_index] !='\0')
			{

new_str[n] = rep_pat[rep_index];

rep_index++;
n++;

}

}

new_str[n] = str[copy_loop];
		i++;

copy_loop++;
		n++;
}
new_str[n]='\0';
printf("\n The new string is : ");
puts(new_str);

return 0;
}
*/
