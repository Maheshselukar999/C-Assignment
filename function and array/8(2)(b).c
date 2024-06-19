/*b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage*/
#include<stdio.h>
struct employee //structure declaration
{
	int empno,age; // member variavle
	char name[20],add[20];
}emp[5]; // array of structure variable called emp
main()
{
	int i; // i for iteration
	//accept details from employee
	printf("Enter details of five employee....\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the %d details...\n",i+1);
		printf("\nEnter the employee number=");
		scanf("%d",&emp[i].empno);
		printf("Enter the employee Name=");
		scanf("%s",&emp[i].name);
		printf("Enter the employee Age=");
		scanf("%d",&emp[i].age);
		printf("Enter the employee address=");
		scanf("%s",&emp[i].add);
	}
	//display details of employee
	printf("\nDisplay five employee details....");
	for(i=0;i<5;i++)
	{
		printf("\n%d employee",i+1);
		printf("\nEmployee Number=%d",emp[i].empno);
		printf("\nEmployee Name=%s",emp[i].name);
		printf("\nEmployee Age=%d",emp[i].age);
		printf("\nEmployee Address=%s",emp[i].add);
	}
	
}
