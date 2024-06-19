/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
main()
{
	float h;
	printf("Enter the height in centimeter");
	scanf("%f",&h);
	if(h<150.0) //condition for dwarf height
	{
		printf("Dwarf\n");
	}
	else if(h>=150.0 && h<=165.0) // condition ofr average height
	{
		printf("Average Height\n");
	}
	else if(h>165.0 && h<=195.0)//condition for taller height
	{
		printf("Taller\n");
	}
	else
	{
		printf("\nAbnormal height");
	}
}
