#include<stdio.h>
#include<math.h>
void main()
{
     int x,n,s;
     printf("enter a number");
     scanf("%d",&x);
     printf("enter power");
     scanf("%d",&n);
     s=pow(x,n);
     printf("%d",s);
}