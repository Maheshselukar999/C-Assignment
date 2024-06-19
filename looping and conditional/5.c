//. WAP to print factorial of given number
#include<stdio.h>
main()
{
	int n,i,fact=1; // n for number, i for iteration,fact for factorial
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i; // formula of factorial number
	}
	printf("Factorial of %d is %d",n,fact); // print the fatorial number
}
