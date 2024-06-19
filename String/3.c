//write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
main()
{
	char str[20];
	int i,len;
	printf("Enter string=");
	gets(str);
	len=strlen(str);// store length of string in len variable
	for(i=len;i>=0;i--)
	{
		printf("\n%c",str[i]); // print charcter index wise
	}
}
