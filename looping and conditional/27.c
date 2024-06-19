// series 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
#include<stdio.h>
main()
{
    double i,n,sum=0; // i for iteration, n for total number of value,sum for addition of whole series
    printf("Enter the number=");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1) // if value of i is odd then 
		{ 
            sum+=i/(i+1);
    	}
        else // if vaue of i is even then
		{ 
            sum-=i/(i+1);
		}
    }
    printf("Sum: %lf",sum); // print sum of whole series.
}

