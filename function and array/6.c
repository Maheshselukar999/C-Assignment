// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
main()
{
	int a[3][3],b[3][3],sum[3][3],sub[3][3],mul[3][3]; // a,b,sum,sub and mul is a 2-d array and it's size is 3
	int i,j;// i indicat row and j indicat column
	printf("input First array element...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]); // store value in a array
		}
	}
	printf("input second array element...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//display two array
	printf("Display...\nFirst Array element..\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("Second Array element...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]=%d\t",i,j,b[i][j]);
		}
		printf("\n");
	}
	printf("************************");
	printf("\nAddition of two array...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];	//addition of two array 
		}
	}
	// print addition of two array 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	printf("\n*****************\n");
	printf("\nSubtraction...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);//print subtraction of two array
		}
		printf("\n");
	}
	int k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
			{
				mul[i][j]=a[i][j]+a[i][k]*b[k][j]; // calculation of multiplication of two array	
			}		
		}
	}
	printf("****************\n");
	printf("Multiplication of two array...\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 	printf("%d\t",mul[i][j]); // print multiplication two array
		}
		printf("\n");
	}
}
