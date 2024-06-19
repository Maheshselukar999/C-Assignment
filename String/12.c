//.Write a program in C to find the number of times a given word 'is' appears in the given string
#include<stdio.h>
main()
{
	char str[50]="gujarat is largest state which is in india."; // store string
	int i,f=0; // i for iteration, f for store total number of occuring 'is'
	int len=strlen(str);	//store length of string
	for(i=0;i<len-2;i++)
	{
		if((str[i]=='i' || str[i]=='I')&&(str[i+1]=='s' || str[i+1]=='S'))// find word 'is'
		{
			f++;	
		}
	}
	printf("%d",f);//print total number of occuring 'is'
}
