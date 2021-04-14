#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int i=4;
    double d = 4.0;
    char s[]="HackerRank ",ch[100];
//    char ch[100];
    // Declare second integer, double, and String variables.
	printf("enter tthe first nu ");
    scanf("%d",&i);
	printf("enter the seconf nm");
    scanf("%0.1f",&d);
	//printf("enter the characters");
    scanf("%s",ch);

        i=i+d;
        d=d*2;
	strcat(s,ch);

        printf("%d\n%0.1f\n%s\n",i,d,ch);
        //strcpy(s,"HackerRank");
        //strcpy(s,ch);
	//strcat(s,ch);
        //puts(s);
    // Read and save an intgeger, double, and String to your variables.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and rint the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}

