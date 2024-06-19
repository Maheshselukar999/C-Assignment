//. WAP to find factorial using recursion
#include<stdio.h>
int fact(int n) // fact function for factorial with return type and argument
{
	if(n>=1) // check condition for number is greater than or equal to 1
	{
		return n*fact(n-1);//recursively return value 
	}
	else 
	{
		return 1;
	}
}
main()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	printf("%d",fact(n)); // print and calling fact function
}
