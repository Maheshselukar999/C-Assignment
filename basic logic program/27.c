//Convert days into months
#include<stdio.h>
main()
{
	int day,mo;
	printf("Enter the total days=");
	scanf("%d",&day);
	mo=day/30; // formula for days into months
	printf("%d month and %d day",mo,day-mo*30); // print the months	
}
