#include<stdio.h>
void main()
{
	int a,b ,c ;
	printf("enter the values of a b c : ");
	scanf("%d%d%d",&a,&b,&c);
	if ((a>b)&&(b>c))
		printf("\n the max value=%d,the min value=%d ",a,c);
	else if ((b>c)&&(c>a))
		printf("\n the max value=%d,the min value=%d ",b,a);
	else if ((c>a)&&(a>b))
		printf("\n the max value=%d,the min value=%d ",c,b);
	else if ((b>a)&&(a>c))
		printf("\n the max value=%d,the min value=%d ",b,c);
	else if ((c>b)&&(b>a))
		printf("\n the max value=%d,the min value=%d ",c,a);
}
