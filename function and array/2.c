// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int n1,n2; // global variable for two number store
int add() //add function for addition
{
	printf("Enter the first number=");
	scanf("%d",&n1);
	printf("Enter the Second number=");
	scanf("%d",&n2);
	return n1+n2; // return sum of two number
}
int sub() // sub function for subtraction
{
	printf("Enter the first number=");
	scanf("%d",&n1);
	printf("Enter the Second number=");
	scanf("%d",&n2);
	return n1-n2; // return subtraction of two number
}
int mul() // mul function for multiplication
{
	
	printf("Enter the first number=");
	scanf("%d",&n1);
	printf("Enter the Second number=");
	scanf("%d",&n2);
	return n1*n2; // return multiplication of two numbers
}
float div() // div function for division
{
	
	printf("Enter the first number=");
	scanf("%d",&n1);
	printf("Enter the Second number=");
	scanf("%d",&n2);
	return (float)n1/n2;//return division of two numbers with convert into float 
}
main()
{
	while(1)
	{
		int ch;
		//Display menu
		printf("\n1.Addition");
		printf("\n2.Subtraction");
		printf("\n3.Multiplication");
		printf("\n4.Division");
		printf("\n5.Exit");
		printf("Enter your choice=");
		scanf("%d",&ch);//store choice value in ch variable
		if(ch==5) //condition for exit 
		{
			break;
		}
		//value of ch in switch case 
		switch(ch) 
		{
			case 1:	printf("Addition of %d and %d is %d",n1,n2,add()); // if ch value is 1 than add function calling
					break;
			case 2:	printf("Subtraction of %d and %d is %d",n1,n2,sub());
					break;
			case 3:	printf("Multiplication of %d and %d is %d",n1,n2,mul());
					break;
			case 4:	printf("Division of %d and %d is %.2f",n1,n2,div());
					break;
			default:printf("Invalid");
					break;
		}
	}
}
