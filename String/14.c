//.Write a program in C to combine two strings manually
#include<stdio.h>
main()
{
	char str1[30],str2[30];
	int len=0,i,j;
	printf("Enter the string 1=");
	gets(str1);
	printf("Enter the string 2=");
	gets(str2);
	//find length of first string
	for(i=0;str1[i]!=NULL;i++)
	{
		len++;
	}
	str1[len++]=' ';// assign space in first string of last position
	for(j=0;str2[j]!=NULL;j++)
	{
		str1[len++]=str2[j]; // store second string in first string character wise
	}
	str1[len]=NULL;//assign null in last position of string
	printf("%s",str1);// print combined string
}
