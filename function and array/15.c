//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
main()
{
	int a[5],i,j,t;
	//accept number
	for(i=0;i<5;i++)
	{
		printf("enter the %d number=",i+1);
		scanf("%d",&a[i]);
	}
	// ascending order 
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j]) 
			{
				//swapping
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("Sorted array in ascending order...");
	//display array in ascending array
	for(i=0;i<5;i++)
	{
		printf("\n%d number=%d",i+1,a[i]);
	}
}
