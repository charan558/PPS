#include<stdio.h>
void sum()
{
	int a,b,s;
	printf("enter the values\n ");
	scanf("%d%d",&a,&b);
	s=a+b;
	printf("sum=%d\n",s);
}

void main()
{
	sum();
	sum();
	sum();
	printf("hello");
	sum();
}
