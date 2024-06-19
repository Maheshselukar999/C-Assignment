// Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
main()
{
	float a,b; // variable a for store height of Triangle and b for store base value of triangle
	float t;
	printf("Enter the height of Triangle= ");
	scanf("%f",&a);
	printf("Enter the base=");
	scanf("%f",&b);
	t=a*b/2; // formula
	printf("\nArea of Triangle=%.2f",t);
}
