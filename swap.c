//This function swaps the value of two variables
#include <stdio.h>
void swap_call_val(int, int);
void swap_call_ref(int *, int *);
int main()
{
int a,b,c,d;
printf(" enter the values ", a,b,c,d);
scanf("%d %d %d %d", &a, &b, &c, &d);
printf("\n In main(), a = %d and b = %d", a, b);
swap_call_val(a, b);
printf("\n In main(), a = %d and b = %d", a, b);
printf("\n\n In main(), c = %d and d = %d", c, d);
swap_call_ref(&c, &d);
printf("\n In main(), c = %d and d = %d", c, d);
return 0;
}

void swap_call_val(int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
printf("\n In function (Call By Value Method) – a = %d and b = %d", a, b);
}
void swap_call_ref(int *c, int *d)
{
int temp;
temp = *c;
*c = *d;
*d = temp;
printf("\n In function (Call By Reference Method) – c = %d and d = %d", *c, *d);
}
