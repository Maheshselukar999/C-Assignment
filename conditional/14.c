//.WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	int n1,n2,n3;//for store three number
	printf("Enter the first value=");
	scanf("%d",&n1);
	printf("Enter the second value=");
	scanf("%d",&n2);
	printf("Enter the third value=");
	scanf("%d",&n3);
	if(n1>n2)//condition for first number is greater than second number
	{
		if(n1>n3)//if below condition true than check first number greater than third number
		{
			printf("Largest value=%d",n1);
		}
		else //if first number is not greater than third number
		{
			printf("Largest Value=%d",n3);
		}
	}
	else // if first number is not greater than second number
	{
		if(n2>n3)//if second number is greater than third number
		{
			printf("Largest value=%d",n2);
			
		}// if second number is not greater than third number
		else
		{
			printf("Largest value=%d",n3);
		}
	}
}
