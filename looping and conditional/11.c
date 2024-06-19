// Accept 5 names from user at run time.
#include<stdio.h>
main()
{
	char name[20];
	int i;
	for(i=0;i<5;i++) // for  accept 5 names
	{
		printf("Enter the %d name=",i+1);
		scanf("%s",&name);
	}
}
