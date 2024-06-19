/*wAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/
#include<stdio.h>
main()
{
	int c,a,b;
	printf("Enter the first number=");
	scanf("%d",&a); // store first number
	printf("Enter the second number=");
	scanf("%d",&b); 	// store second number
	//display menu
	printf("press 1 for addition..\n");
	printf("press 2 for subtraction..\n");
	printf("press 3 for Multiplication..\n");
	printf("press 4 for Division..\n");
	printf("press 5 for modulo..\n");
	scanf("%d",&c);
	if(c==1)//choose addition
	{
		printf("Addition=%d",a+b);
	}
	else if(c==2)//choose subtraction
	{
		printf("Subtraction=%d",a-b);
	}
	else if(c==3)//choose multiplication
	{
		printf("Multiplication=%d",a*b);
	}
	else if(c==4)//choose division 
	{
		printf("Division=%.2f",(float)a/b);
	}
	else //modulo
	{
		printf("Modulo=%d",a%b);
	}
}
