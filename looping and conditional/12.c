// Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
main()
{
	int n,l,i,result=0;
	printf("Enter the number=");
	scanf("%d",&n); // store number
	int temp=n;
	// using while loop
	while(n!=0) 
	{
		result=result+(n%10)*(n%10)*(n%10); // formula for armstrong number
		n=n/10;
	}
	if(result==temp) // check condtion for armstrong number
	{
		printf("%d is armstrong number...",temp); 
	}
	else
	{
		printf("%d is not armstrong number...",temp);
	}
	// using for loop
/*	for(i=0;n!=0;i++)
	{
		result=result+(n%10)*(n%10)*(n%10);
		n=n/10;
	}
	if(result==temp)
	{
		printf("%d is armstrong number...",temp);
	}
	else
	{
		printf("%d is not armstrong number...",temp);
	}*/
}
