/* Accept 3 numbers from user using while loop and check each numbers palindrome*/
#include<stdio.h>
main()
{
	int n,i=0,original; // n for number,i for iteration and original for store value of n 
	while(i<3)
	{
		int rev=0; // for reverse number 
		printf("Enter the number=");
		scanf("%d",&n); // get value from user
		original=n;  // store value in original
		while(n!=0) // for  reverse number store in rev variable 
		{
			rev=rev*10+n%10; // reverse number formula
			n=n/10;
		}
		if(original==rev) // check original and reverse number are equal or not.
		{
			printf("%d is palindrome number\n",original);
		}
		else
		{
			printf("%d is not palindrome number\n",original);
		}
		i++;
	}
}
