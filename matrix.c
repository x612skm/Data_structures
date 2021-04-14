// matrix multiplicaton of M AND N
#include <stdio.h>

int main()
{
int i, j, k; //taking integer
int rows1, cols1, rows2, cols2, res_rows, res_cols; // taking rows and coloumns
int mat1[5][5], mat2[5][5], res[5][5];

printf("\n Enter the number of rows in the first matrix : "); //specifing first row
scanf("%d",&rows1);
printf("\n Enter the number of columns in the first matrix : ");//specifying first coloumn
scanf("%d",&cols1);
printf("\n Enter the number of rows in the second matrix : ");//specifying second row
scanf("%d",&rows2);
printf("\n Enter the number of columns in the second matrix : ");//specifying second coloumn
scanf("%d",&cols2);
if(cols1 != rows2)//stating if conditon that if cols1 is not equal to row 2
{
printf("\n The number of columns in the first matrix must be equalto the number of rows in the second matrix");

}
res_rows = rows1;
res_cols = cols2;

//condition for the first matrix
printf("\n Enter the elements of the first matrix ");
for(i=0;i<rows1;i++)
{
for(j=0;j<cols1;j++)
{
scanf("%d",&mat1[i][j]);

}
}
//conditon for the second matrix
printf("\n Enter the elements of the second matrix ");
for(i=0;i<rows2;i++)
{

for(j=0;j<cols2;j++)

{

scanf("%d",&mat2[i][j]);

}
}
for(i=0;i<res_rows;i++)
{

for(j=0;j<res_cols;j++)

{

res[i][j]=0;

for(k=0; k<res_cols;k++)

res[i][j] += mat1[i][k] * mat2[k][j];

}
}

//elements of the product of the matrix
printf("\n The elements of the product matrix are ");
for(i=0;i<res_rows;i++)
{
		printf("\n");

for(j=0;j<res_cols;j++)

printf("\t %d",res[i][j]);
}
printf("\n");
return 0;
}
