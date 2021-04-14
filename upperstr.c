
//my first program
#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
int main()
{
	char  str[50], upper_str[50];
	int i=0;
	printf("enter the string\n");
//	gets(str); // modified version of scanf in string
	scanf("%s", &str[i]); //if we write %c here then it will scan only a single character
//	scanf("%c",&str[i]); //scans only single character
	while(str[i] != '\0')
	{
		if((str[i]>='a') && (str[i]<='z'))

			upper_str[i]=str[i]-32;

		else

			upper_str[i]=str[i];

	i++;
	}
	upper_str[i]='\0';
	printf("the upper case string of %s is  %s \n",str,  upper_str);
	printf("cheers \n");
//	printf(" %s", upper_str ); // format for the puts
//	puts(upper_str); //same as gets else for printf
	return 0;
}
