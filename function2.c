#include<stdio.h>

int sum();

void main()
{
	int c ;
	sum=c;
	printf(" the c value %d\n",sum);
}

int sum()
{
	int a ,b,sum;
	printf("\nenter the values of a and b");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum fun value=%d",sum);
	return sum;
}
