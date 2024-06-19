// series (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
main()
{
	int i,n,sum=1; // i for iteration, n for total number, sum for addition of whole series.
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+(i+i); // formula
	}
	printf("%d",sum); // print sum of series.
}
