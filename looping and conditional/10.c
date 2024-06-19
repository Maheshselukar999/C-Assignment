/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	int last=n%10; // store last number in last variable
	int first=n; // store number in first variable
	while(n>=10)// for find first digit of numbers
	{
		n=n/10;	
	}	
	first=n; // store first digit in first variable
	printf("Sum of first and last digit=%d",first+last);// print sum of first and last number 
}
