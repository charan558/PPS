// area of circle with formuLA

#include<stdio.h>
#define PI 3.14
void main()
{
	int r;
	float area ;
	printf("enter the radius : ");
	scanf("%d",&r);
	area=PI*r*r;
	printf("\nthe area of circle %f",area);
}
