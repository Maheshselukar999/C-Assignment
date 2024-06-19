/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<stdio.h>
main()
{
	int i,j,a=1; // i and j for row and column, a for print number
	for(i=1;i<=5;i++) // row
	{
		for(j=1;j<=i;j++) // column
		{
			printf("%d",a++); // print and increment a. 
		}
		printf("\n"); 
	}
}
