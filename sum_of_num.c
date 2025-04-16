#include<stdio.h>
void main()
{
	int n,sum=0,rem,rev=0,temp;
	printf("enter the value");
	scanf("%d",&n);
	temp=n;
	while (n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
	sum=sum+rem;
	n=n/10;
	}
	printf("\nsum=%d",sum);
	printf("\nreverse=%d",rev);
	if (temp==rev)
	printf("number is a palindrome=%d",temp);
	else
	printf("number is not a palindrome=%d",temp);

	
	}
