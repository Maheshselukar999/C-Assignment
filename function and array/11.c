/* WAP to accept 5 numbers from user and display in reverse order using for
loop and array*/
#include<stdio.h>
main()
{
	int i,a[5]; // i for iteration, a is array
	//accept number 
	for(i=0;i<5;i++)
	{
		printf("Enter the %d number=",i+1);
		scanf("%d",&a[i]);
	}
	//display number in reverse order
	printf("reverse order...\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
