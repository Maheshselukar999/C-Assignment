/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary*/
#include<stdio.h>
main()
{
	float s,i,l;
	printf("Enter the monthly salary=");
	scanf("%f",&s);
	i=s*10/100; // calculate of insurance premium
	l=s*10/100;// calculate of loan installment
	printf(" Total salary\t\t%.2f\n-insurance premium\t%.2f\n- Loan installment\t%.2f\n",s,i,l);
	printf("---------------------------------\n");
	printf("Remaining salary\t%.2f",s-i-l);	 // print remaining salary
}
