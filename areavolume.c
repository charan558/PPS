// area and volume of sphere formula are area=4*PIr.r vol=4/3pir.r.r.

#include<stdio.h>
#define PI 3.14
void main()
{
	int r;
	float area,vol ;
	printf("enter the radius : ");
	scanf("%d",&r);
	area=4*PI*r*r;
	vol=4/3*PI*r*r*r;
	printf("\n%f area of a sphere",area);
	printf("\n%f volume of sphere",vol);
}
