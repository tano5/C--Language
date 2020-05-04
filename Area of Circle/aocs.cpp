#include<stdio.h>
#define PI 3.14159
/*program to calulate areas of circles using a loop*/
int main()
{
	float radius, area;								/*variable declaration*/
	int count, n;									/*variable declaration*/
	float process(float radius);					/*function declaration*/
	
	printf("How many circles ? = ");
	scanf("%d", &n);
	
	for (count = 1; count <= n; count++ )
	{
			printf("\n Circle No.= %d: Radius= ", count);
			scanf("%f", &radius);
			
			if (radius < 0 )
				area = 0;
			else
				area = process(radius);
				
			printf("Area= %f \n", area);	
	}
}

float process(float r)						/*function declaration*/
{
	float a;								/*local variable declaration*/

	a= PI * r * r;
	return(a);

}
