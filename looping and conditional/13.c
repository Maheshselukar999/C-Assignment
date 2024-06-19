//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
main()
{
		int i=1,fact=1,n; 
		printf("Enter the number:");
		scanf("%d",&n); // store number in n
		while(i<=n)
		{
			fact=fact*i; // formula of factorial
			i++;	
		}	
		printf("Factorial =%d",fact); // print factorial
}
