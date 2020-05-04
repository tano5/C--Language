#include<stdio.h> 										/*LIBRARY FILE ACCESS*/

/* program to calculate the area of a cirlce*/     						/* TITLE(COMMENT) */

int main()											/* FUNCTION HEADING */
{
	float radius, area;									/* VARIABLE REQUEST */
	
	printf("Radius = ");									/* OUTPUT STATEMENT[PROMPT] */
	scanf("%f", &radius);									/* INPUT STATEMENT */
	area = 3.14 * radius * radius;								/* ASSIGNMENT STATEMENT */
	printf("Area= %f", area);								/* OUTPUT STATEMENT */
	return 0;
}
