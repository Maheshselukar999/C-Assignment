/*
A
BC
DEF
GHIJ
KLMNO
*/
#include<stdio.h>
main()
{
	int i,j; // for row and column
	char a='A'; // for print alphabets
	for(i=1;i<=5;i++) // row
	{
		for(j=1;j<=i;j++) // column
		{
			printf("%c",a++); // print alphabet and increment a variable
		}
		printf("\n");
	}
}
