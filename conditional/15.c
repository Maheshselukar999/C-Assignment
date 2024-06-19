/*Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/
#include<stdio.h>
main()
{
	int math,che,phy,total;
	printf("Enter the Marks of Math=");
	scanf("%d",&math);//store marks of math subject in math variable
	printf("Enter the Marks of Chemistry");
	scanf("%d",&che);//store marks of chemistry subject in che variable
	printf("Enter the Marks of physics=");
	scanf("%d",&phy);//store marks of physics in phy subject
	total=math+che+phy;//sum of all three subject marks
	printf("Total marks of three subjects=%d\n",total);// print total marks
	if(math>=65 && phy>=55 && che>=50)// check condition for first terms
	{
			if((math+phy)>=140 || (total)>=190) // if below condition is true than check marks of math and phy is greater than or equal to 140 OR total marks is greaterthan or equal to 190  
			{
				printf("Eligible for admission..");
			}
			else
			{
				printf("not eligible for admission...");
			}
	}
	else
	{
		printf("not eligible for admission..");
	}
}
