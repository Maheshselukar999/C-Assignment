//.Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
main()
{
	char str[20]="Mahesh";//store string 
	char s1	='h'; // store h character for remove h character from a string
	int i,j=0,len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=s1) // check condition str[i] is h 
		{
			str[j++]=str[i];
		}
	}
	str[j]=NULL;
	printf("%s",str);// print string of removing character 
}
