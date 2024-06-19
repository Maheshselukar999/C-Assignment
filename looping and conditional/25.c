// series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int n,i,sum=0; // n for number, i for iteration and sum for Addition of whole series.
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i); // formula
	}
	printf("%d",sum); // print the sum of series.
}
