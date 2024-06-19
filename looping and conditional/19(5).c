/* pattern
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>
main()
{
	char i,j; // for row and column
	for(i='A';i<='E';i++) // row
	{
		for(j='A';j<=i;j++) // column
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
