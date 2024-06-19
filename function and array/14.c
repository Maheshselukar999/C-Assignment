//Perform 2D matrix array
#include<stdio.h>
main()
{
	int a[2][2],i,j; //a is 2-d array with 2 size,i for row, j for column
	for(i=0;i<2;i++) // row
	{
		for(j=0;j<2;j++) // column
		{
			printf("Enter the number[%d][%d]",i,j);
			scanf("%d",&a[i][j]); //store number in a array
		}
	}
	//display 2-d array
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
