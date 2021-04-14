#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 100 // Maximum string size
void string(char str1[] , char str2[]);

int main()
{
	int i=4;
	double d=4.0;
	scanf("%d",&i);
	scanf("%lf",&d);

	i=i+d;
	d=d*2;
	printf("%d\n%0.1lf\n");
return 0;
}
void string(char str1[], char str2[])
{
//	int i=4;
//	double d=4.0;
     	str1[20] = "HackerRank ";
	 str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;

//	scanf("%d",&i);
//	scanf("%lf",&d);
    /* Input two strings from user */
   // printf("Enter first string: ");
//    gets(str1);
    //printf("Enter second string: ");
    gets(str2);
//	printf("%d\n%0.1lf\n",i,d);
    /* Move till the end of str1 */
    while(*(++s1));

    /* Copy str2 to str1 */
    while(*(s1++) = *(s2++));

    printf(" the concanetd string is = %s", str1);

    return 0;
}
