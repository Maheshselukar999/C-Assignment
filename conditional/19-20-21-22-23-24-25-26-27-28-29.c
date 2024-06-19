/*.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00*/
#include<stdio.h>
main()
{
		int id,unit;
		char nm[20];
		printf("Enter the customer id=");
		scanf("%d",&id);// store customer id
		printf("Enter the name of customer=");
		scanf("%s",&nm); //store name 
		printf("Enter the total unit of consumed=");
		scanf("%d",&unit);//store unit consumed by customer
		printf("Customer Id=%d",id);//print id
		printf("Customer Name=%s",nm);//print name
		if(unit<350)//check unit is less than 350
		{
			
			printf("Total amount=%.2f",(float)unit*1.20);//print total amount 
		}
		else if(unit>=350 && unit<600)// check unit is greater than or equal to 350 AND unit less than 600
		{
			printf("Total amount=%.2f",(float)unit*1.50);//print total amount
		}
		else if(unit>=600 && unit<800)//check unit is greater than or equal to 600 AND unit less than 800
		{
			printf("Total amount=%.2f",(float)unit*1.80);//print total amount
		}
		else//for unit greater than 800
		{
				printf("Total amount=%.2f",(float)unit*2.00);//print total amount
		}		
}
