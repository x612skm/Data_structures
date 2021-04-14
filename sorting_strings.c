//sorting of names alphabetically
//same as concept of sorting
#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char names[5][10],temp[10];// because names has i and j both in executiom
	printf("enter the number of names : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the names : %d ", i+1);
		scanf("%s", &names[i]);
		//gets(names[i]);//it will not work ; counts from 2nd not from first
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(names[j],names[j+1])>0)
			{
				strcpy(temp,names[j]);
				strcpy(names[j],names[j+1]);
				strcpy(names[j+1],temp);
			}
		}
	}
	printf(" the alphabetically sorted names are :\n ");
	for(i=0;i<n;i++)
	printf("%s\n", names[i]);
	//puts(names[i]);
	printf("\n");
return 0;
}

/*
#include <stdio.h>

#include <string.h>
int main()
{
char names[5][10], temp[10];
int i, n, j;

printf("\n Enter the number of students : ");
scanf("%d", &n);
for(i=0;i<=n;i++)
{

printf("\n Enter the name of student %d : ", i+1);
		
gets(names[i]);
}
for(i=0;i<n;i++)
{
		
for(j=0;j<n-i-1;j++)
		{
			
if(strcmp(names[j], names[j+1])>0)
			{
				
strcpy(temp, names[j]);
				
strcpy(names[j], names[j+1]);
				
strcpy(names[j+1], temp);
			
}
		
}
}
printf("\n Names of the students in alphabetical order are : ");
for(i=0;i<n;i++)
		
puts(names[i]);

return 0;
}
*/
