//.Write a program in C to extract a substring from a given string
#include<stdio.h>
main()
{
	char str[40]="Gujarat-University,Ahmedabad-382350";
	char *token;
	char s[10]="-,"; // store symbol 
	token=strtok(str,s); // store substring in token pointer variable
	while(token!=NULL)
	{
		printf("%s\n",token);// print the substring
		token=strtok(NULL,s);  
	}
}
