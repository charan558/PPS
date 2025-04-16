#include<stdio.h>
void main()
{
     int n,i,j,c;
     printf("enter range");
     scanf("%d",&n);
     printf("the series is");
     for(i=1;i<n;i++)
     {
          c=0;
          for(j=1;j<=i;j++)
          {
               if(i%j==0)
               {
                    c++;
               }
          }
          if(c==2)
          {
               printf("%d\t",i);
          }
     }
}