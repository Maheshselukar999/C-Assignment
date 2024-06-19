//Write a program in C to separate individual characters from a string
#include<stdio.h>
main()
{
	char str[20]; // for store string
	int i; // for iteration
	printf("Enter string=");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		printf("\n%c",str[i]); // print index wise character 
	}
}
