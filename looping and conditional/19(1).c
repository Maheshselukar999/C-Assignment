/*
1
10
101
1010
10101
*/
#include<stdio.h>
main()
{
	int i,j; // row and column
	for(i=1;i<=5;i++) // row
	{
		for(j=1;j<=i;j++) // column
		{
			if(j%2==0) // condition check for print 0
			{
				printf("0");
			}
			else 
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
