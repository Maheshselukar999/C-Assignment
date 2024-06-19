// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
main()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	printf("%d\n%d\n%d",n,n*n,n*n*n); // print first three powers of given number
}
