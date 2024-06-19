//Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i;
	printf("Enter the first String=");
	gets(s1);
	printf("Enter the second String=");
	gets(s2);
	int len1=0,len2=0,cmp=0; // for length of two string and cmp for compare
	for(i=0;s1[i]!=NULL;i++) // for length of first string
	{
		len1++;
	}
	for(i=0;s2[i]!=NULL;i++)// for length of second string
	{
		len2++;
	}
	if(len1==len2) // check length of first and second string are same 
	{
		for(i=0;i<len1;i++)
		{
			if(s1[i]==s2[i])// compare character of first and second string
			{
				cmp++;
			}
		}
		if(len1==cmp) // check length of first and compare are same
		{
			printf("String 1 and string 2 are same...");
		}
		else
		{
			printf("String 1 and sting 2 is equal...");
		}
	}
	else if(len1>len2)
	{
		printf("String 1 greater than string 2");
	}
	else
	{
		printf("String 1 less than string 2");
	}
}
