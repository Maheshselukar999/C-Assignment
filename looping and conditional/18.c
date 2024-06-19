// Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
main()
{
	int i,n; // i for iteration and n for store number
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=10;i++) // row
	{
		printf("\n%d*%d=%d",n,i,n*i); // print row value of table
	}
}
