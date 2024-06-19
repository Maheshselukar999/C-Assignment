//.WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	printf("Enter the value of c=");
	scanf("%d",&c);
	int m=(a<b)?(a<c?a:b):(b<c?b:c); //check minimum number and store in m variable
	printf("Minimum number is %d");//print minimum  number 
}
