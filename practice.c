#include<stdio.h>
void main()
{
	int a,b;
	float p;
	printf("enter the valus : \n");
	scanf("%d%d",&a,&b);
	p=((float)a/(float) b)*100;
	printf("%d is %2f percentage of %d",a,p,b);
}
