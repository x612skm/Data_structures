//area of a circle
#include <stdio.h>

int main()
{

	float radius;
	double area;

		printf("\n Enter the radius of the circle : ");
		scanf("%f", &radius);
			area = 3.14 * radius * radius;
			printf(" \n Area = %.2lf", area);
	return 0;
}
