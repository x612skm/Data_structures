/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int integer(int,int);
int main()
{
int main(void)
{
	char str1[]="hacerrank ";
	char str2[100];
	printf("enter the second character : ");
	gets(str2);
	strcat(str1,str2);
	puts(str1);
return 0;
}
int interger(int,int)
{
	int i=4;
	double d=4.0;
	printf("enter the numbers below ");
	scanf("%d",&i);
	scanf("%lf",&d);
	i=i+d;
	d=d*2;
	printf("%d\n%0.1lf\n",i,d);
}
*/
  // Declare second integer, double, and String variables.

#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank";
    int j;
    double e;
    char t[500] = "junk text";
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &j);
    scanf("%lf", &e);
    //scanf("%[^\r\n]s", t );
    fgets(t, sizeof(t), stdin);
    fgets(t, sizeof(t), stdin);
    // Print the sum of both integer variables on a new line.

    printf ("%d \n", i+j);
    printf ("%.1f \n", d+e);
    printf ("%s%s \n", s, t);
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
}

