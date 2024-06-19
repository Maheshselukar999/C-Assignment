//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
main()
{
	char c;
	printf("Enter the character=");
	scanf("%c",&c);//store character in c variable
	if(c>='A' && c<='Z')//check condition for character is upper case
	{
		printf("\nUppercase");
	}
	else if(c>='0' && c<='9')//condition for character is digit
	{
		printf("Digit");
	}
	else if(c>='a' && c<='z')// check condition for character is lowercase
	{
		printf("\nLowercase");
	}
	else//for special character
	{
		printf("special character");
	}
}
