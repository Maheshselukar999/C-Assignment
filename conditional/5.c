//. Check Number Is Positive or Negative

#include<stdio.h>
main()
{
	int a;
	printf("Enter the number=");
	scanf("%d",&a);
	if(a>=0)//check condition for positive number
	{
		printf("%d is positive",a);
	}
	else//for negative
	{
		printf("%d is negative",a);
	}
	
}
