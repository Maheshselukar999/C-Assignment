/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include<stdio.h>
main()
{
	int i,n,e=0,o=0,sume=0,sumo=0; // i for iteration,n for number,o for odd number,e for even number,sume for sum of even numbers,sumo for sum of odd nnumbers.
	printf("Enter the 10 numbers\n");
	for(i=0;i<10;i++)
	{
		printf("Enter the %d number=",i+1);
		scanf("%d",&n);
		if(n%2==0) // check number is even
		{
			e++; // increase the number of even numbers
			sume=sume+n; // sum of even numbers
		}
		else
		{
			o++; // increase the number of odd numbers
			sumo=sumo+n; // sum of odd numbers
		}
	}
	printf("\ntotal %d numbers are Even",e); // print the total number of even numbers
	printf("\ntotal %d numbers are Odd",o); // print the total number of odd numbers.
	printf("\nSum of even numbers=%d",sume);// print sum of all even numbers
	printf("\nSum of odd numbers=%d",sumo); // print sum of all od numbers
	
}
