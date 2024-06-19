//find the Character Is Vowel or Not
#include<stdio.h>
main()
{
	char c;
	printf("Enter the character=");
	scanf("%c",&c);//store character in c variable
	//conditions for character is vowels or not
	if(c=='a' || c=='A' || c=='e' || c=='E' ||c=='o' || c=='O' ||c=='u' || c=='U' ||c=='E' || c=='e')
	{
		printf("%c is vowel",c);
	}
	else
	{
		printf("%c is not vowel",c );
	}
}
