//passing the enitre structure
#include<stdio.h>
typedef struct
{
	int x;
	int y;
}point;
	void display(point);
	int main()
	{
		point p1={2,3};
		display(p1);
		return 0;
	}
	void display(point p)
	{
		printf("the cordintaes of the point are : %d %d",p.x,p.y);
	}
