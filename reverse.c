#include<stdio.h>
void main()
{
	int n,reverse=0,rem;
	printf("\nenter the value of n");
	scanf("%d",&n);
	
	
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	printf(" the reversed number is\n%d", reverse);
		
}

