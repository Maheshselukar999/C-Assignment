// Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
main()
{
	char str[20]; // for store string
	int i,len=0;// i for iteration,len for store length of string
	printf("Enter string=");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		len++;
	}
	printf("Length of string=%d",len); // print length of string
}
