//.Accept the input month number and print number of days in that month.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number of month=");
	scanf("%d",&n);//store number of month
	switch(n)
	{
		case 1:	printf("31 days.");//if number of month is 1 than print 31 days
				break;
				
		case 2:	printf("28 days.");
				break;
		case 3:printf("31 days.");
				break;
		case 4:printf("30 days.");
				break;
		case 5:printf("31 days.");
				break;
		case 6:printf("30 days.");
				break;
		case 7:printf("31 days.");
				break;
		case 8:printf("31 days.");
				break;
		case 9:printf("30 days.");
				break;
		case 10:printf("31 days.");
				break;
		case 11:printf("30 days.");
				break;
		case 12:printf("31 days.");
				break;
		default:
				printf("Invalid...");
				break;
		
	}
}
