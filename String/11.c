//.Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include<stdio.h>
main()
{
	char str[20],i;
	printf("Enter a sentence:");
	gets(str); // store string in str variable
	// using function
	for(i=0;i<str[i]!=NULL;i++)
	{
		if(str[i]>='a'&& str[i]<='z') // check character is lower case 
		{
			printf("%c",toupper(str[i])); // print character in upper case using toUpper() function
		}
		if(str[i]>='A'&& str[i]<='Z')
		{
			printf("%c",tolower(str[i]));
		}
	}
	printf("\n");
	// without function
	for(i=0;i<str[i]!=NULL;i++)
	{
		if(str[i]>='a'&& str[i]<='z') // check the character is lowercase letter
		{
			str[i]=str[i]-'a'+'A'; // convert into upper case 
			printf("%c",str[i]); // print upper case character
		}
		else 
		{
			str[i]=str[i]+'a'-'A'; // convert into lower case 
			printf("%c",tolower(str[i]));// print lower case character
		}
		
	}
}
