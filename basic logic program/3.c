//WAP to Find Area And Circumference of Circle
#include<stdio.h>
main()
{
	float r; // r for store radius value
	printf("Enter the radius of cicle=");
	scanf("%f",&r);
	printf("\nArea of circle=%.2f",r*r*3.14); // formula and print area of circle
	printf("\nCircumference of circle=%f",2*3.14*r); // formula andprint circumference of circle
}
