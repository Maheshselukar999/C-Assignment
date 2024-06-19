//WAP to show Monday to Sunday using switch case
#include<stdio.h>
main()
{
	int n;
	char c;
	printf("Enter the number of week day[1-7]=");
	scanf("%d",&n);//store number of week dayin n variable
	switch(n)
	{
		case 1: printf("Monday"); // if value of n is 1 than print monday
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
