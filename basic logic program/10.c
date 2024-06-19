//find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
main()
{
	float h,l,w;
	printf("Enter the height of rectangle=");
	scanf("%f",&h);
	printf("Enter the width of rectangle=");
	scanf("%f",&w);
	printf("Enter the length of rectangle=");
	scanf("%f",&l);
	printf("Area of Rectangular prism=%.2f",2*((w*l)+(h*l)+(h*w)));
}
