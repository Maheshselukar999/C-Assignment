// Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
main()
{
	char str[100],maxchar;
	printf("Enter the string");
	gets(str);
	int count[255]={0};
	int i,maximum=0;
	// store frequency of each character in count array
	for(i=0;str[i]!=NULL;i++)
	{
		count[(int)str[i]]++;
	}
	// Find the character with the maximum frequency
	for(i=0;str[i]!=NULL;i++)
	{
		if(count[(int)str[i]]>maximum)
		{
			maximum=count[(int)str[i]];
			maxchar=str[i];
			
		}
	}
	printf("Maximum character is=%c",maxchar);
}
