//Write a program to find out the max number from given array using function
#include<stdio.h>
main()
{
	int a[5],i; //a is a array and i for iteration coount 
	//accept five numbers and store in array from user
	for(i=0;i<5;i++)
	{
		printf("Enter the %d number=",i+1);
		scanf("%d",&a[i]);
	}
	int max=a[0];//assign value first index of array in max variable
	//for find maximum number
	for(i=1;i<5;i++)
	{
		if(max<a[i]) //check max value is less than array of i'th index
		{
			max=a[i];
		}
	}
	printf("Max=%d",max);//print maximum array
}
