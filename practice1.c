// assending order of numbers
/* 3!=6 a b c
	b c a 
	c a b
	a c b
	b a c
	c b a */


#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the values :\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a<=b)&&(b<=c))
		printf("assending order %d %d %d",a,b,c);
	else if((b<=c)&&(c<=a))
		printf("assending order %d %d %d",b,c,a);
	else if((c<=a)&&(a<=b))
		printf("assending order %d %d %d",c,a,b);
	else if((a<=c)&&(c<=b))
		printf("assending order %d %d %d",a,c,b);
	else if((b<=a)&&(a<=c))
		printf("assending order %d %d %d",b,a,c);
	else
		printf("assending order %d %d %d",c,b,a);
}		
