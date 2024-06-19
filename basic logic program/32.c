// Accept 2 numbers and find out its sum check it size
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the first number=");
	scanf("%d",&a);
	printf("Enter the second number=");
	scanf("%d",&b);
	printf("Sum=%d\nsize=%d",a+b,sizeof(a+b)); // print the size of sum of two numbers..
}
