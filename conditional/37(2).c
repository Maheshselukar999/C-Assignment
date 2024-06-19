//WAP to show  Vowel or Consonant using switch case
#include<stdio.h>
main()
{
	char c;
	printf("Enter the charcter=");
	scanf("%c",&c);//store character in c variable
	switch(c)
	{
		case 'a':
		case 'A':printf("%c is a vowel...",c); // if character is a or A than print vowels
					break;
		case 'e':
		case 'E':printf("%c is a vowel...",c);
					break;
		case 'i':
		case 'I':printf("%c is a vowel...",c);
					break;
		case 'o':
		case 'O':printf("%c is a vowel...",c);
					break;
		case 'u':
		case 'U':printf("%c is a vowel...",c);
					break;
		default://if character is not vowels and character is alphabets than print character is consonants
				if(((c>='a' && c<='z')||(c>='a' && c<='z')))
					{
						if((c!='a'||c!='A')||(c!='e'||c!='E')||(c!='i'||c!='I')||(c!='o'||c!='O')||(c!='u'||c!='U'))
						{
							printf("%c is a consonants",c);
						}						
					}		
					else // if character is not consonants than print special character
					{
						printf("%c is s special character",c);
					}
					break;
	}
}
