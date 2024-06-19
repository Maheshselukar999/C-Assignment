//. WAP to check if the given year is a leap year or not
#include<stdio.h>
main()
{
	int y;// for store year
	printf("Enter the year=");
	scanf("%d",&y);
	if(y%400==0) // check condition for leap year
	{
				printf("%d is leap year",y);
	}
	else if(y%100==0)//check condition for not leap year
	{
				printf("%d is not leap year",y);		
	}
	else if(y%4==0)//for leap year
	{
				printf("%d is  leap year",y);
	}
	else 
	{
		printf("%d is not leap year",y);
	}
}
