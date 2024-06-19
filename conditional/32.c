/*Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\*/
#include<stdio.h>
main()
{
	float s,hr,da;//s for salary amount,hr for HRA,da for DA
	printf("Enter the salary amount=");
	scanf("%f",&s);
	if(s<=0) //check salary negative 
	{
		printf("Invalid salary amount..");
	}
	else if(s<=10000) // if c=salary is not negative and salary is less than or equal to 10000
	{
		hr=s*20/100;//calculation of HRA
		da=s*80/100;//calculation of DA
		printf("Basic salary\t%.2f",s);//print basic salary
		printf("\n+ HRA\t\t%.2f",hr);//print HRA
		printf("\n+ DA\t\t%.2f",da);//print DA
		printf("\n-------------------------");
		printf("\nGross salary\t%.2f",s+hr+da);//print gross salary
	}
	else if(s>10000 && s<=20000)//if salary is greater than 10000 AND salary is less than or eqqual to 20000
	{
		hr=s*25/100;
		da=s*90/100;
		printf("Basic salary\t%.2f",s);
		printf("\n+ HRA\t\t%.2f",hr);
		printf("\n+ DA\t\t%.2f",da);
		printf("\n-------------------------");
		printf("\nGross salary\t%.2f",s+hr+da);
	}
	else//salary is greater than 20000
	{
		hr=s*30/100;
		da=s*95/100;
		printf("Basic salary\t%.2f",s);
		printf("\n+ HRA\t\t%.2f",hr);
		printf("\n+ DA\t\t%.2f",da);
		printf("\n-------------------------");
		printf("\nGross salary\t%.2f",s+hr+da);
	}
}
