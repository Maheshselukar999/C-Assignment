// Write a program in C to copy one string to another string.
#include<stdio.h>
main()
{
	char s1[20],s2[20];
	printf("Enter string=");
	gets(s1);
	strcpy(s2,s1); // for copy string s1 to s2 
	printf("Entered string copy in another string=%s",s2); // print copied string
}
