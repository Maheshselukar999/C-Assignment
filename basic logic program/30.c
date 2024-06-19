//.WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	int c,d,y; // c for choice,d for days,y for years
	while(1) // for menu driven
	{
		
		printf("\n1.Years into days\n");
		printf("2.days into years");
		scanf("%d",&c);
		if(c==1)
		{	
			printf("\nEnter the total years=");
			scanf("%d",&y);
			printf("\ntotal days=%d",y*365);
		}
		else if(c==2)
		{
			printf("\nEnter the total days");
			scanf("%d",&d);
			printf("\nTotal Years=%d",d/365);		
		}
		else
		{
			printf("Invalid choice");
			break;
		}
	}
}
