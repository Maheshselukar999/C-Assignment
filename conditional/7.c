//Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	int m;
	printf("Enter the marks of subject=");
	scanf("%d",&m);//store marks in m variable
	if(m<0 || m>100) // condition for invalid marks
	{
		printf("Invalid marks");	
	}	
	else if(m>=33)//condition for passing marks
	{ 
		printf("Pass");	
	}
	else//for fail
	{
		printf("fail");
	}
}
