//.WAP to perform Palindrome number using for loop and function
#include<stdio.h>
palindrome(int n)// palindrome function definition
{
	int i,rev=0,t=n; // i for iteration,rev for store reverse number,t for store numner
	for(i=0;n>0;i++)
	{
		rev=rev*10+(n%10);
		n=n/10;
	}
	if(t==rev) // check number and reverse number are same
	{
		printf("%d is palindrome number",t);
	}
	else
	{
		printf("%d is not palindrome number",t);
	}
}
main()
{
	int n;
	printf("Enter number=");
	scanf("%d",&n);
	palindrome(n);//palindrome function calling
}
