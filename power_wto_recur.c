tu#include<stdio.h>
#include<math.h>
int power();
void main()
{
     int n,x;
     printf("enter n value:\n");
     scanf("%d",&n);
     printf("enter x value:\n");
     scanf("%d",&x);
     int p=pow(x,n);
     printf("power=%d",p);
}
int power(int x,int n)
{
     int k,i;
     for(i=1;i<=n;i++)
     {
          k=k*x;
     }
     return k;
}
