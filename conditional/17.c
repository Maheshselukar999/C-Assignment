//Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first Angle of triangle=");
	scanf("%d",&a);//store first angle of triangle value in a variable
	printf("Enter the second Angle of triangle=");
	scanf("%d",&b);//store second angle of triangle value in a variable
	printf("Enter the third Angle of triangle=");
	scanf("%d",&c);//store third angle of triangle value in a variable
	if((a+b+c)==180) // check all three angle values are equal to 180
	{
		printf("The triangle is valid");
	}
	else//if below condition is false
	{
		printf("The triangle is not valid");
	}
}
