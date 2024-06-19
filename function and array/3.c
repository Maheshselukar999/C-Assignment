//WAP to find reverse of string using recursion
#include<stdio.h>
rev(char str[],int i)//rev function with two parameter for reverse of string 
{
	if(str[i]!=NULL)
	{
		rev(str,i+1);
		printf("%c\n",str[i]);
	}
}
main()
{
	char str[10];
	printf("Enter the string=");
	gets(str); //store string in str variable
	rev(str,0);//rev function calling
}
