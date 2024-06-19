//WAP to input the week number and print week day.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number of week day[1-7]=");
	scanf("%d",&n);//store number of week day
	switch(n) 
	{
		case 1: printf("Monday");//if number of week day is one
				break;
		case 2: printf("tuesday");
				break;
		case 3: printf("thursday");
				break;
		case 4: printf("wednesday");
				break;
		case 5: printf("friday");
				break;
		case 6: printf("saturday");
				break;
		case 7: printf("sunday");
				break;
		default:
				printf("Invalid number...");
				break;
	}
}
