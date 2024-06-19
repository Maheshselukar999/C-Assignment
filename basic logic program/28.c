//.Convert years into days and months
#include<stdio.h>
main()
{
	int y,d,m;
	printf("enter the total year");
	scanf("%d",&y);
	d=y*365; // formula for year into days
	m=d/30; // formula months
	printf("%d month and %d days",m,d-m*30); // print month and days
}
