//. Calculate person’s insurance premium based on salary
#include<stdio.h>
main()
{
	int salary;
	float health;
	printf("Enter the total salary amount=");
	scanf("%d",&salary);
	printf("Enter the rate of health insurance premium=");
	scanf("%f",&health);
	float premium=(float)salary*health/100; // calculate premium amount based on salary
	printf("Insurance premium amount=%.2f",premium);
}
