	// series 1 2 3 6 9 18 27 54...
#include<stdio.h>
main()
{
    int i=0,n=9,n1=1,n2=2; // i for iteration and  n1=1 n2=2 for printf first two number and calculation for other number 
    printf("Number Series:\n");
    printf("%d\t",n1); // for print 1
    printf("%d\t",n2); // for print 2
    for(i=3;i<=n;i++)
    {
    	if(i%2==1) // if i is odd then
    	{
    		n1=n1*3;
    		printf("%d\t",n1);
		}
		else // if i is even then
		{
			n2=n2*3;
			printf("%d\t",n2);
		}
	}
}

