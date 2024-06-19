// write a program to  Reverse a Number Using FOR Loop
#include<stdio.h>
main()
{
	int n,reverse=0,remainder,i; // n for number,reverse for store reverse number,remainder for store remainder.
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;n!=0;i++)
	{
		remainder=n%10; // for find remainder and store its variable
		reverse=reverse*10+remainder; // for reverse number formula.
		n=n/10; // for last second number and thrid and so on. 
	}
	printf("Reverse number %d",reverse); // printf reverse number.	
}
