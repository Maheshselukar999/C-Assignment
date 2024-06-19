//.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("Enter the 10 number.");
	while(i<=10)
	{
		printf("\nEnter the %d number=",i);
		scanf("%d",&n); // store number in n variable
		sum=sum+i; // formula of sum
		i++;
	}
	printf("\nSum=%d",sum); // print sum of 10 numbers.
}
