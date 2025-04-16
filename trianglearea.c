#include<stdio.h>
#include<math.h>
void main()
{
     float a,b,c,s,h;
     printf("enter a,b,c values:\n");
     scanf("%f%f%f",&a,&b,&c);
     s=(a+b+c)/2;
     h=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("area of triangle =%f",h);

}