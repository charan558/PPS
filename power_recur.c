#include<stdio.h>
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
     if(n-1==0)
     {
          return 1;
     }
     else
     {
          return x*power(x,n-1);
     }
}

