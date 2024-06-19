//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
main()
{
	int n,sum=0,i=1,se=0,so=0,even=0,odd=0; 
	while(i<=5)
	{
		printf("\nEnter the %d number=",i);
		scanf("%d",&n); // store number in n
		if(n%2==0) // check condition for even number
		{
			even++; // increment
			se+=n; // store even number in se(sum of even number)
			printf("%d is even number",n); // print even number
		}
		else
		{
			odd++;
			so+=n; // store odd number in so(sum of odd numbers)
			printf("%d is odd number",n); // print odd number
		}
		sum=sum+n;
		i++;
	}
	printf("\nSum of all numbers=%d",sum); // print sum of all number
	printf("\nTotal even numbers=%d",even);// print total even number
	printf("\nTotal odd numbers=%d",odd);// print total odd number
	printf("\nsum of even numbers=%d",se);// print sum of all even numbers. 
	printf("\nsum of odd numbers=%d",so);// print sum of all odd numbers.
}
