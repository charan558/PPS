#include<stdio.h>
void main()
{
	int n,reverse=0,rem,original;
	printf("\n enter the value of n :  \t");
	scanf("%d",&n);
	original=n;
	
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
		
	}
	if (original==reverse)
	printf(" the number is palindrome\n%d",original);
	else
	printf(" the number is not palindrome\n%d",original);
	
		
}

