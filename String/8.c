//Write a program in C to count the total number of vowels or consonants in a string.
#include<stdio.h>
main()
{
	char str[20];
	int i,vowels=0,consonants=0,special=0,digit=0;
	printf("Enter the string=");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if((str[i]=='a' || str[i]=='A') || (str[i]=='e' || str[i]=='E') || (str[i]=='I' || str[i]=='i')||(str[i]=='o' || str[i]=='O')||(str[i]=='u' || str[i]=='U')) // for check character is vowel
		{
			vowels++;
		}
		else if(str[i]>'0' && str[i]<'9') // check digit
		{
			digit++;
		}
		else if(((str[i]!='a' || str[i]!='A') || (str[i]!='e' || str[i]!='E') || (str[i]!='I' || str[i]!='i')||(str[i]!='o' || str[i]!='O')||(str[i]!='u' || str[i]!='U'))&&(str[i]>'a'||str[i]>'A')&&(str[i]<'z'||str[i>'Z'])) // check consonants
		{
			consonants++;
		}
		else // special character
		{
			special++;
		}
	}
	printf("Total vowels=%d",vowels);
	printf("\nTotal consonants=%d",consonants);
	printf("\nTotal special character=%d",special);
	printf("\nTotal digit=%d",digit);
}
