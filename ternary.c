#include<stdio.h>
int main()
{
	int a=1,b=2,c=3,d;
	d=((a>b)&&(b>c))?a:((b>c)?b:c);
	printf("%d",d);
}
