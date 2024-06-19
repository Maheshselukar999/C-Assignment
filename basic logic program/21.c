/*Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/
#include<stdio.h>
main()
{
	int a=11,b=22,x=33,y=44,t;
	//with using third variable
	printf("Before swapping value..\n");
	printf("A=%d\nB=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\nAfter swapping value using third variable...\nA=%d\nB=%d",a,b);
	//without using third variable
	printf("\nbefore swapping value...\n");
	printf("X=%d\nY=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping value without using third variable...\nX=%d\nY=%d",x,y);
}
