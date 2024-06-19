/* Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include<stdio.h>
main()
{
	float p,r,t;
	printf("Enter the principal amount=");
	scanf("%f",&p);
	printf("Enter the rate of interest=");
	scanf("%f",&r);
	printf("Enter the time span=");
	scanf("%f",&t);
	float a=p*pow((1+r/100),t);
	printf(" compound interest of %f= %.2f",p,a-p); // print compound interest..
}
