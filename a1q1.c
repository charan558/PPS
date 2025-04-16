// write a C program to count the number of the digits  in a number 

#include<stdio.h>
void main()
{
	long int n;
	int i=0,rem;
	printf("enter the nunber : ");
	scanf("%lu",&n);
	
	while(n!=0)
	{
		i=i+1;
		rem=n%10;
		n=n/10;
		}
	printf("no.of digits=%d",i);
}
