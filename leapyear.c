#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0)
	
		if(n%100==0)
			if(n%400==0)
			printf("leap year");
			else
			printf("not leap year");
		else
		printf(" leap yearr");
	else
	printf("not a leap year");
}
