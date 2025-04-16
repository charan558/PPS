// simple calculater using operator 

#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the values of a and b : ");
	scanf("%d%d",&a,&b);
	
	// arthematic operators
	printf("\naddition= %d : ",a+b);
	printf("\nsubstruction= %d : ",a-b);
	printf("\nmultiplication= %d : ",a*b);
	printf("\ndivision= %d : ",a/b);
	printf("\nremainder of values= %d : ",a%b);
	
	// relation operator
	printf("\nA is less than B= %d : ",a<b);
	printf("\nA is greater than B= %d : ",a>b);
	printf("\nA is less than or equal to B= %d : ",a<=b);
	printf("\nA is greater than or equal to B= %d : ",a>=b);
	printf("\nA is equall to B= %d : ",a==b);
	printf("\nA is not equall to B= %d : ",a!=b);
}
	
