/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.*/

#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	printf("enter five digit num : ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		printf("%d rem\n",rem);
		sum=sum+rem;
		n=n/10;
		//printf(" sum=%d",n);
	}
	printf(" sum=%d",sum);
	
		
}
