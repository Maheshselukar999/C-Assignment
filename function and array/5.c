/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/
#include<stdio.h>
main()
{
	while(1)
	{
		int ch,a[2],i,j,t; // ch for choice,a is array, i and j for iteration, t for store value temparory
		//display menu
		printf("\n1.Ascending");
		printf("\n2.descending");
		printf("\n3.exit");
		printf("\nenter the choice");
		scanf("%d",&ch);//store choice value
		if(ch==1) // if ch value is 1 
		{
			// for accept value from user and store in array
			for(i=0;i<2;i++)
			{
				printf("Enter the %d number=",i+1);
				scanf("%d",&a[i]);
			}
			//for Ascending order 
			for(i=0;i<2;i++)
			{
				for(j=i+1;j<2;j++)
				{
					if(a[i]>a[j]) // check condition for greater value
					{
						//swapping value
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			printf("Array Element in Ascending order...\n");
			for(i=0;i<2;i++)
			{
				printf(" %d number=%d\n",i+1,a[i]);
			}
		}
		else if(ch==2) // if choice value is 2 
		{
			//accept value from user and store in array
			for(i=0;i<2;i++)
			{
				printf("Enter the %d number=",i+1);
				scanf("%d",&a[i]);
			}
			// for descending order
			for(i=0;i<2;i++)
			{
				for(j=i+1;j<2;j++)
				{
					if(a[i]<a[j]) // check condition for less value 
					{
						//swapping two values
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			printf("Array Element in descending order...\n");
			for(i=0;i<2;i++)
			{
				printf(" %d number=%d\n",i+1,a[i]);
			}
		}
		else if(ch==3) // for exit
		{
			break;
		}
		else
		{
			printf("Invalid...");
		}
	}
}
