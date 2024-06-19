//.Find ascii value of given number
#include<stdio.h>
main()
{
	int n,d; // n for store number and d for store remainder of number..
	printf("Enter the number=");
	scanf("%d",&n);
	while(n>0) 
	{
		d=n%10; // remainder of n 
		printf("%d (%d)\n",d,d+48); // print the ASCII value of number..
		n=n/10;
	}
}
