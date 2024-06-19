//.WAP to show difference between Structure and Union.
#include<stdio.h>
struct student // structure
{
	int n1; 
	float f1;
	char c1[20];
}stud; 
union employee // union
{
	int n2;
	float f2;
	char c2[20];
}emp;
main()
{
	printf("size of student structure =%d",sizeof(stud));// integer+float+char	
	printf("\nsize of employee structure=%d",sizeof(emp)); // char because char size is greatest
}
