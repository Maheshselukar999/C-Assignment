//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-
#include<stdio.h>
main()
{
		int n; 
		printf("Enter the bill amount=");
		scanf("%d",&n); //store bill amount in n variable
		if(n>256) //check n is greater than 256
		{
			if(n>=800) //check condition for n is greater than or qeual to 800
			{
				printf("Bill amount \t\t%d\n+surcharge(percent) \t18\nTotal Bill amount\t%f",n,(float)n+n*18/100);
			}
			else
			{
				printf("no surcharge applicable");
			}
		}
		else 
		{
			printf("no surcharge applicable");
		}
}
