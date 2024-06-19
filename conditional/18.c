// Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main()
{
	int c,s;
	printf("Enter the cost price=");
	scanf("%d",&c);//store cost price
	printf("Enter the selling price=");
	scanf("%d",&s);//store selling price
	if(c<s)//check condition for profit
	{
		printf("profit amount=%d",s-c);
	}
	else if(c>s)//check condition for loss
	{
		printf("loss of amount=%d",c-s);
	}
	else //if below all condition are false than 
	{
		printf("no profit no loss");
	}
}
