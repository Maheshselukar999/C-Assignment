//Accept 5 numbers from user and perform sum of array
#include<stdio.h>
main()
{
	int a[5],i,sum=0;
	//accept number
	for(i=0;i<5;i++)
	{
		printf("enter the %d number=",i+1);
		scanf("%d",&a[i]);
	}
	//sum of array
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];//calculation of sum of array number
	}
	printf("\nSum of array elements=%d",sum);//print sum of array
}
