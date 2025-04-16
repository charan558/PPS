#include<stdio.h>


void sum(void); // function declaration



void main() // function calling
{
	sum();
	sum();
}
void sum() //( or void sum(void) ) *" function defination
{
	int a,b,sum ;
	printf("\nenter the values ; \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\n sum=%d",sum);
}
	
	


