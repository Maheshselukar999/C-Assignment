//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
main()
{
	float s,t=0;  // s for salary,t for total salary
	char nm[20]; // name
	int i; // for iteration
	for(i=0;i<5;i++) // accept name and salary and calculate total salary 
	{
		printf("Enter the %d Employee Name=",i+1);
		scanf("%s",&nm);
		printf("Enter the %d Employee salary=",i+1);
		scanf("%f",&s);
		t=t+s;
	}
	printf("\nTotal salary=%.2f",t); // print total salary 
	printf("\nAverage salary=%.2f",t/5);// print average salary
}
