/*WAP to accept 5 numbers from user and check entered number is even or odd
using of array*/
#include<stdio.h>
main()
{
	int n[5],i;//n is a array and i for iteration
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d number",i+1);
		scanf("%d",&n[i]);//store number in n array
		if(n[i]%2==0) //check number is even
		{
			printf("This is Even number..");
		}
		else 
		{
			printf("This is odd number..");
		}
	}
}
