//AP to print table up to given numbers
#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the number of you want to print table=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,i*n); // print row of table
	}
}
