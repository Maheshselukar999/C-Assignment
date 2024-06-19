//Write a program in C to find the largest and smallest words in a string.
#include<stdio.h>
main()
{
	char str[100];//for store string
	char word[100][100];// multidimensional character array for store each word
	char small[100],large[100]; //for store smallest and largest word
	int i=0,j=0,k,length;
	printf("Enter String=");
	gets(str);

	for(k=0;str[k]!=NULL;k++)
	{
		if(str[k]!=' ' && str[k]!='\0') // check condition for complete word
		{
			word[i][j++]=str[k];// store word in word[0][0],word[0][1].....
		}
		else 
		{
			word[i][j]=NULL; //assign null in word[][] last position
			i++;
			j=0;
		}
	}
	length=i+1; // increment by 1 in length
	strcpy(small,word[0]); // copy first word in small variable
	strcpy(large,word[0]);// copy  first word in large variable
	for(k=0;k<length;k++)
	{
		if(strlen(large)<strlen(word[k])) //check condition of largest word
		{
			strcpy(large,word[k]);
		}
		if(strlen(small)>strlen(word[k]))// check condition of smallest word
		{
			strcpy(small,word[k]);
		}
	}
	printf("\nLargest word is=%s",large);// print largest word
	printf("\nsmallest word is=%s",small);// print smallest word
}

