//WAP to show difference between Structure and Union
#include<stdio.h>
struct student // structure delaration
{
	int n1; //structure member variable
	float f1;
	char c1[20];
}stud;//structure variable
union employee // union declaration
{
	int n2; //union member variable
	float f2;
	char c2[20];
}emp;//union variable
main()
{
	printf("size of student structure =%d",sizeof(stud));// integer+float+char	
	printf("\nsize of employee structure=%d",sizeof(emp)); // char because char size is greatest
}
