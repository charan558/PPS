//fucntions with no argumment and with return type fun()

#include<stdio.h>

int sum(void);

void main()
{
	int s;
	s=sum();
	printf("sum=%d",s);
}

int sum()
{
	int a,b,sum;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;

}
	

