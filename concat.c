#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i=4;
	double d=4.0;
	char str1[]="HackerRank ";
	char str2[100], copy_str[100];
	char *pstr1, *pstr2, *pcopy_str;
	pstr1=str1;
	pstr2=str2;
	pcopy_str=copy_str;
	//printf("enter the first and second number ::  ");
	scanf("%d",&i);
	scanf("%lf",&d);
	scanf("%s",str2);
	i=i+d;
	d=d*2;
	while(*pstr1 != '\0')
	{
		*pcopy_str=*pstr1;
		pcopy_str++,pstr1++;
	}
	while(*pstr2 != '\0')
        {
                *pcopy_str=*pstr2;
                pcopy_str++,pstr2++;
        }
	*pcopy_str = '\0';
	strcat(str1,str2);
/*	while(*pcopy_str != '\0')
	{
		printf("%c", *pcopy_str);
		pcopy_str++;
	}
*/
	printf("%d\n%0.1lf\n",i,d);
	puts(str1);
/*	while(*pcopy_str != '\0')
        {
                printf("%c", *pcopy_str);
                pcopy_str++;
        }
*/	//puts(*);
return 0;
}
