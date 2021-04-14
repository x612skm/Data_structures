#include<stdio.h>
int main()
{
	char str[10],c_str[10];
	char *pstr,*pc_str;
	pstr=str;
	pc_str=c_str;
	printf("enter the string : ");
	scanf("%s", str);
//	fgets(*pstr);
	while(*pstr != '\0')
	{
		*pc_str=*pstr;
		pstr++;

		pc_str++;
	}
	*pc_str='\0';
	printf("the copied string is" ); // %s  ",pc_str);
	while(*pc_str!='\0')
	{
		printf("%c", *pc_str);
		pc_str++;
	}
//	puts(pc_str);

	printf("\n");
return 0;
}
/*
#include <stdio.h>
int main()
{
char str[100], copy_str[100];
char *pstr, *pcopy_str;
pstr = str;
pcopy_str = copy_str;
printf("\n Enter the string : ");
gets(str);
while(*pstr != '\0')
{
*pcopy_str = *pstr;
		
pstr++, pcopy_str++;
}
*pcopy_str = '\0';
printf("\n The copied text is : ");
while(*pcopy_str != '\0')
{
		
printf("%c", *pcopy_str);
		
pcopy_str++;
}
return 0;
}
*/
