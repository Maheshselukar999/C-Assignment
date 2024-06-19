//Accept month number and display month name
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number of months[1-12]=");
	scanf("%d",&n);//store number of months
	switch(n)
	{
		case 1: printf("January");//if number of month is 1
				break;
		case 2: printf("February");
				break;
		case 3: printf("March");
				break;
		case 4: printf("April");
				break;
		case 5: printf("May");
				break;
		case 6: printf("June");
				break;
		case 7: printf("July");
				break;
		case 8: printf("august");
				break;
		case 9: printf("september");
				break;
		case 10: printf("october");
				break;
		case 11: printf("November");
				break;
		case 12: printf("Desember");
				break;
		default:
				printf("Invalid number...");
				break;
	}
}
