// greatest of three numbers


#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("\n the value A is %d",a);
	printf("\n the value B is %d",b);
	printf("\n the value C is %d",c);
	if ((a>b) && (a>c))
		printf("\n A is the largest value :%d",a);
	else if ((b>a) && (b>c))
		printf("\n B is the largest value : %d",b);
	else
		printf("\n c is larger value :%d",c);
	return 0;
}
