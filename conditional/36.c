/*Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
main()
{
	int unit;
	float total,add;
	printf("Enter the total electricity unit=");
	scanf("%d",&unit);//store total unit
	if(unit<0)//check unit is negative 
	{
		printf("Enter the valid unit...");
	}
	else if(unit<=50) //check unit less than or equal to 50
	{
		total=(float)unit*0.50;//calculation of total amount 
		add=total*20/100;//calculation for additional charge
		printf("Electricity Bill amount\t%.2f\n+Additional charge\t%f",total,add);
		printf("\n----------------------------------");
		printf("\nTotal Amount\t\t%.2f",total+add);
	}
	else if (unit>50 && unit<=150)//check condition of unit is greater than 50 AND unit less than equal to 150
	{
		total=(float)unit*0.75;
		add=total*20/100;
		printf("Electricity Bill Amount\t%.2f\n+Additional charge\t%f",total,add);
		printf("\n----------------------------------");
		printf("\nTotal Amount\t\t%.2f",total+add);
	}
	else if(unit>150 && unit<=250)//check condition for unit is greater than 150 AND unit less than equal to 250
	{
		total=(float)unit*1.20;
		add=total*20/100;
		printf("Electricity Bill Amount\t%.2f\n+Additional charge\t%f",total,add);
		printf("\n----------------------------------");
		printf("\nTotal Amount\t\t%.2f",total+add);
	}
	else 
	{
		total=unit*1.50;
		add=total*20/100;
		printf("Electricity Bill Amount\t%.2f\n+Additional charge\t%f",total,add);
		printf("\n----------------------------------");
		printf("\nTotal Amount\t\t%.2f",total+add);
	}
}
