//append of two strings
#include<stdio.h>
int main()
{
	char dest_str[50], src_str[50];
	int i=0,j=0;
	printf("enter the source string :");
	scanf("%s", &src_str[i]);
	printf("enter the destination string : ");
	scanf("%s", &dest_str[j]);
	while(dest_str[i]!='\0')
	{
		i++;
	}
	while(src_str[j]!='\0')
	{
		dest_str[i]=src_str[j];
		i++;
		j++;
	}
	dest_str[i]='\0';
	printf(" final appended string\n |||| :::  %s  ::: |||| ", dest_str);
	printf("\n");
	printf("code completed cheers !! \n");

return 0;
}
