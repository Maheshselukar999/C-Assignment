//WAP to accept 5 students name and store it in array
#include<stdio.h>
main()
{
	char name[5][20];// character array of array
	int i;
	//accept five name 
	for(i=0;i<5;i++)
	{
		printf("%d name=",i+1);
		scanf("%s",&name[i]);
	}
	//display five name
	for(i=0;i<5;i++)
	{
		printf("\n%d name=%s",i+1,name[i]);
	}
}
