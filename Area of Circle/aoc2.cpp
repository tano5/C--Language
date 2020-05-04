#include<stdio.h>
/*program to calulate area of circle*/
int main()
{
	float radius, area;
	
	printf("Radius= ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("Area of Circle= %f ", area);
	return 0;
}
