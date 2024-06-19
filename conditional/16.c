/*Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
main()
{
	int t;
	printf("Enter the tempareture in centigrade=");
	scanf("%d",&t);
	if(t<0) // check tempareture is negative
	{
		printf("Freezing weather");
	}
	else if(t>0 && t<10) //check tempareture is very cold 
	{
		printf("Very cold weather");
	}
	else if(t>10 && t<20)//check tempareture is cold
	{
		printf("cold weather");
	}
	else if(t>20 && t<30) // check tempareture is normal
	{
		printf("Normal weather");
	}
	else if(t>30 && t<40)// check tempareture is hot
	{
		printf("Hot weather");
	}
	else//for very hot tempareture
	{
		printf("very hot weather");
	}
}
