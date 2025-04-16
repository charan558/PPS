// write a C program to print first and last didits of the given number  

#include<stdio.h>
void main()
{
	long int n;
	int i=0,rem,temp;
	printf("enter the nunber :\n ");
	scanf("%lu",&n);
	temp=n%10;
	
	while(n!=0)
	{
		i=i+1;
		rem=n%10;
		n=n/10;
		}
	printf("no.of digits=%d\n",i);
	printf("last digit=%d\n",temp);
	printf("first digit=%d\n",rem);

	
}
