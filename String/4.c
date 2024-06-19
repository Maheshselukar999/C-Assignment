// Write a program in C to count the total number of words in a string.
#include<stdio.h>
main()
{
	char str[20];
	int count=0,i;
	printf("Enter the string=");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==' ' && str[i+1]!=' ') // check character of string is space of index wise
		{
			count++;
		}
	}
	printf("total number of words=%d",count+1); // print the total words 
}
