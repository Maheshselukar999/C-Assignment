//. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
main()
{
	int i; // i for iteration
	int a[5]; // array
	for(i=0;i<5;i++)
	{
		printf("Enter the %d number=",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d number=%d\n",i+1,a[i]);
	}
}
