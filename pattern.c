#include<stdio.h>
void main()
{
     int i,j,n;
     printf("enter n value\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               printf("*");
          }
          printf("\n");
     }
     for(i=n;i>=1;i--)
     {
          for(j=i-1;j>=1;j--)
          {
               printf("*");
          }
          printf("\n");
     }
     
}