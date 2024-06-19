// series  1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
main()
{
	int n,i,sum=0; // n for number,i for iteration and sum for Addition
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i); // print first value of series
		if(i!=n) // if value of i is not equal to number then print +
		{
			printf("+");
		}
		sum=sum+i; // for value assign in sum variable
	}
	printf("=%d",sum);// for print sum of series.
}
