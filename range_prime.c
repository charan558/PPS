#include<stdio.h>
void main()
{
     int i,j,c,n;
     printf("enter n value");
     scanf("%d",&n);
     printf("the prime numbers are ");
     for(i=1;i<=n;i++)
     {
          c=0;
          for(j=1;j<=i;j++)
          {
               if(i%j==0)
               {
                    c++;
               }
               if(c==2)
               {
                    printf("%d",i);
               }
          }
     }
}