// .Convert temperature Fahrenheit to Celsius
#include<stdio.h>
main()
{
	float f;
	printf("Enter the temperature in fehrenheit=");
	scanf("%f",&f);
	printf("Temperature in Celsius=%.2f",(f-32)*5/9);
}
