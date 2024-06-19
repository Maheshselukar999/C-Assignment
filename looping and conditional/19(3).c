/*
   	 *
    ***
   *****
  *******
 *********
*/
#include<stdio.h>
main()
{
	int i,j,s; // i for row,j for column,s for space 
	for(i=1;i<=5;i++) // row
	{
			for(s=5;s>=i;s--) // space
			{
				printf(" ");
			}
			for(j=1;j<=2*i-1;j++) // column
			{
				printf("*");
			}
			printf("\n");
	}
}
