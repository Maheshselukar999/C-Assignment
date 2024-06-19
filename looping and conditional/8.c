//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
main()
{
	int n,l,i; // n for number,l for limit,i for iteration
	printf("Enter the Limit:");
	scanf("%d",&l);
	int max=0; // assign  0 in max variable
	for(i=0;i<l;i++)
	{
		printf("Enter the number=");
		scanf("%d",&n);
		if(max<n) // check condition for n is greater than max value
		{
			max=n; // assign n value in max variable
		}
	}
	printf("Maximum number=%d",max); // print maximum number..
}
