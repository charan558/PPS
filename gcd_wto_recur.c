#include<stdio.h>
int gcd();
void main()
{
     int a,b,max;
     printf("enter a,b values:\n");
     scanf("%d%d",&a,&b);
     int s=gcd(a,b);
     printf("gcd=%d",s);
}
int gcd(int a,int b)
{
     int max=(a>b)?a:b;
     int min=(a<b)?a:b;
     int i;
     for(i=2;i<=min;i++)
     {
          if(max%i==0 && min%i==0)
          {
               return i;
          }
          else
          {
               return 1;
          }
     }
}