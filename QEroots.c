#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,r1,r2;
	printf("enter the values : \n");
	scanf("%d%d%d",&a,&b,&c);
	d=pow((b*b-4*a*c),(0.5));
	r1=((-b)+d)/2*a;
	r2=((-b)-d)/2*a;
	printf("%f\n",d);
	printf("r1=%f  \n",r1);
	printf("r2=%f",r2);
}
