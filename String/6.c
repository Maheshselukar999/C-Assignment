// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
main()
{
	char str[20];
	int i,d=0,a=0,spe=0,s=0; // i for iteration,d for digit,a for alphabets,spe for special character,s for space
	printf("Enter string=");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==' ') // for check character is space
		{
			s++;
		}
		else if(str[i]>'0' && str[i]<'9') // for check character is digit
		{
			d++;
		}
		else if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' || str[i]>='Z'))// for check character is alphabets
		{
			a++;
		}
		else// for special character
		{
			spe++;
		}
	}
	printf("Total alphabets=%d",a);
	printf("\nTotal digits=%d",d);
	printf("\nTotal space=%d",s);
	printf("\nTotal special character=%d",spe);
}
