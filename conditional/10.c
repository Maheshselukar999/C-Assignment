//WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	if(n==0)//check number is zero
	{
		printf("Number is zero");
	}
	else if(n>0)//check number is positive
	{
		printf("Number is positive");
	}
	else//for negative
	{
		printf("Number is negative");
	}
}
