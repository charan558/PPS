#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2;
	scanf("enter the values of a b c %d%d%d",&a,&b,&c);
	d=sqrt(b*b-(4*a*c));
	r1=-b-d/2*a ;
	r2=-b+d/2*a ;
	printf("%d%d",r1,r2);
	return 0;
}
