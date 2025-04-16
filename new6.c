/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

#include<stdio.h>
void main()
{

	float basicsalary,dearness,rent,cut,total;
	printf("\nenter the salary");
	scanf("%f",&basicsalary);
	dearness=basicsalary/100*40;
	printf("\ntotal dearness =%f",dearness);
	rent=basicsalary/100*20;
	printf("\ntotal rent =%f",rent);
	cut=dearness+rent;
	printf("\ntotal cut from basic salary =%f",cut);
	total=basicsalary-cut;
	printf("\nrequied salary=%f",total);
}
