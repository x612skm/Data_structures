#include<stdio.h>
int main()
{
	typedef struct complex
	{
		int real;
		int imag;
	}COMPLEX;
	COMPLEX  c1,c2,sum_c,sub_c;
		int option;
		do
		{
			printf("\n******** MAIN MENU ************ ");
			printf("\n 1. READ THE COMPLEX NUMBERS ");
			printf("\n 2.  DISPLAY THE COMPLEX NUMBERS ");
			printf("\n 3. ADD THE COMPLEX NUMBERS ");
			printf("\n 4. SUBTRACT THE COMPLEX NUMBERS ");
			printf("\n 5. || EXIT ||");
			printf("\nenter the option :: ");
			scanf("%d", &option);
		switch(option)
		{
			case 1:
				printf("enter the real and imaginary part of the  first complex number : ");
				scanf("%d %d", &c1.real,&c1.imag);
				printf("enter the real and imaginary part of the  second complex number : ");
				scanf("%d %d ", &c2.real, &c2.imag);
				break;

			case 2:
				printf("the first complex number is : %d+%di", c1.real,c1.imag);
				printf("the second complex number is : %d+%di", c2.real,c2.imag);
				break;
			case 3:
				sum_c.real= c1.real+c2.real;
				sum_c.imag= c1.imag+c2.imag;
				printf(" the sum of the two complex numbers are : %d+%di", sum_c.real,sum_c.imag);
				break;
			case 4:
				sub_c.real=c1.real-c2.real;
				sub_c.imag=c1.imag-c2.imag;
				printf(" the difference between two complex numbers are : %d+%di", sub_c.real,sub_c.imag);
				break;
		}

		}
		while(option != 5 );
	return 0;
}

