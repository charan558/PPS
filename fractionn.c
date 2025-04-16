#include<stdio.h>
#include<math.h>
void main()
{
     int n,x,s=1,i;
     printf("enter the x value:\n");
     scanf("%d",&x);
     printf("enter the n value:\n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          s=s+pow(x,i);
     }
     printf("%d",s);
}