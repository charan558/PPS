#include<stdio.h>
#include<math.h>
void main()
{
	float a,p,r,t,s;
	printf("enter the values : ");
	scanf("%f%f%f",&p,&r,&t);
	s=1+(float)r/100;
	a=p*pow(s,t);
	printf("%f",a);
}
