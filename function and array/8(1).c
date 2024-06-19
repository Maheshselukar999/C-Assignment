//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
main()
{
	char s2[10],s1[10],s=0,i; // s1 and s2 for store string,s for count length
	printf("Enter string=");
	gets(s1);
	strcpy(s2,s1); //string copy from s1 to s2
	strrev(s1); //reverse string 
	int len=strlen(s2); // length of string
	for(i=0;i<len;i++)
	{
		if(s1[i]==s2[i]) //check character of s1 string and s2 string are same
		{
			s++; // increment s value
		}
	}
	if(len==s)//check length and a value is same 
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
 	}
}
