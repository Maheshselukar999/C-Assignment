//.Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
main()
{
	int n,i,fact=1;
	printf("Enter the five number...\n");
	for(i=1;i<=5;i++)
	{
		printf("\nEnter the %d number=",i);
		scanf("%d",&n); // number store in n variable
		int j=1; 
		while(j<=n)
		{
			fact=fact*j; // formula of factorial
			j++;
		}
		printf("\nFactorial of %d is %d",n,fact);// print factorial of number
		fact=1; // fact=1 for find factorial of next number
	}
}
