// WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746
#include<stdio.h>
main()
{
	int n,rev=0;
	printf("Enter the number=");
	scanf("%d",&n);
	int t=n;
	while(n>0)
	{
		rev=(n%10)+rev*10; // formula for reverse number
		n=n/10; 
	}
	printf("Reverse number of %d is %d",t,rev); // print original anf reverse number
}
