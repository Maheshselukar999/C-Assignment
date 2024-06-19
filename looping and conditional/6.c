//Fibonacci series of given number
#include<stdio.h>
main()
{
	int i,n,n1=0,n2=1,n3;
	printf("Enter the number");
	scanf("%d",&n);
	printf("\n%d",n1); // print 0
	printf("\t%d",n2); // print 1
	for(i=3;i<=n;i++)
	{
		n3=n1+n2; 
		printf("\t%d",n3); // print number
		n1=n2;
		n2=n3;
	}
}
