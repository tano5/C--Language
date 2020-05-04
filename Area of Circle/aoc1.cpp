#include<stdio.h>
#define PI 3.14159

/* program to calculate are af circle */
int main()

{
	float radius, area;
	float process(float radius);
	
	printf("Radius= ");
	scanf("%f", &radius);
	area= process(radius);
	printf("Area= %f", area);
}
float process(float r)
{
float a;

a= PI * r * r;
return(a);
}
