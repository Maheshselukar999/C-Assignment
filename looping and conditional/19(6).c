/*pattern
		*
		**
		***
		****
		*****
		******
		*****
		****
		***
		**
		*
*/
#include<stdio.h>
main()
{
	int i,j; // for row and column
	for(i=1;i<=6;i++) // row
	{
		for(j=1;j<=i;j++) // column
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=6;i++) // row
	{
		for(j=1;j<=6-i;j++) // column
		{
			printf("*");
		}
		printf("\n");
	}
}
