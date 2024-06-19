//.Accept 5 expense from user and find average of expense
#include<stdio.h>
main()
{
	float ex,t;
	int i;
	for(i=0;i<5;i++) // accept 5 expense and calculate total expense
	{
		printf("Enter the %d expance=",i+1);
		scanf("%f",&ex);
		t=t+ex;
	}
	printf("\nAverage of Expances=%.2f",t/5); // print average expensec..
}
