// swapping value using multiplication and division....
#include<stdio.h>
main()
{
	int a=10,b=20;
	printf("Before swapping value...");
	printf("\nA=%d\nB=%d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nAfter swapping value...");
	printf("\nA=%d\nB=%d",a,b);
}
