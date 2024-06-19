//.WAP to find maximum number among 3 numbers using ternary operator
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
	int m=(a>b)?(a>c?a:c):(b>c?b:c); // condition of ternary operator and store result in m variable
	printf("Maximum Number is %d",m);//print maximum number
}
