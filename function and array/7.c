//. WAP Find out length of string without using inbuilt function
#include<stdio.h>
length(char s[]) // length function with character type parameter
{
	int i,c=0; // i for iteration count and c for store length of string
	for(i=0;s[i]!=NULL;i++)
	{
		c++;
	}
	printf("length of string=%d",c);
}
main()
{
	char s[10];
	printf("Enter the String:");
	gets(s);
	length(s); // length function calling and pass string as a parameter
}
