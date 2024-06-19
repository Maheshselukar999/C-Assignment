/*WAP program to print below output using for loop
	01 02 03 04 05 06 07 08 09 10
	11 12 13 14 15 16 17 18 19 20
	.............................
	.............................
	41 42 43 44 45 46 47 48 49 50*/
#include<stdio.h>
main()
{
	int i,j,k=1; // i and j for iteration and k for print number. 
	for(i=1;i<=10;i++) // this loop for column
	{
		for(j=1;j<=5;j++,k++) // this loop for row 
		{
			printf("%-3d",k); // print number
		}
		printf("\n"); // for new line
	}
}
