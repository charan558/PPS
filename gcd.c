#include<stdio.h>
void main()
{
	int a ,b ,min,gcd,i;
	printf("enter the values \n");
	scanf("%d%d",&a,&b);
	min=(a<b)?a:b;
	for (i=1;i<min;i++)
	{
		if (a%i==0 && b%i==0)
		gcd=i;
	}
	printf("gcd =%d",gcd);}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
