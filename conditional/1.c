//write a C program to accept two integers and check whether they are equalor not
#include<stdio.h>
main()
{
	int a,b; // for store two values
	printf("Enter the value of A=");
	scanf("%d",&a);
	printf("Enter the value of B=");
	scanf("%d",&b);
	if(a==b)// check equality of two numbers
	{
		printf("A and B are equal");
	}
	else
	{
			printf("A and B are Not equal");
	}
}
