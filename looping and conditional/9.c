//. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main()
{
	int n,i,sum=0,a; // n for store length of numbers,i for iteration, sum for sum of numbers,a for store numbers
	printf("Enter the length of number=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number=");
		scanf("%d",&a);
		sum=sum+a; // sum of numbers
	}
	printf("Sum=%d",sum);// print sum of numbers
}

