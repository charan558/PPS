#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter the values\n");
	scanf("%d%d",&a,&b);
	printf("before swapping numbers a=%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping numbers a=%d,b=%d\n",a,b);
}
	
