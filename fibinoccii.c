#include<stdio.h>
void main()
{
     int f1=0,f2=1,f3,n,i;
     printf("enter a number");
     scanf("%d",&n);
     printf("the series is");
     for(i=0;i<n;i++)
     {
          printf("%d",f1);
          f3=f1+f2;
          f1=f2;
          f2=f3;
          
     }
}