#include<stdio.h>
void main()
{
     int i,j,n;
     printf("entr n value\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               if(i==j)
                 printf("*");
               else
                    printf(" ");
          }
          printf("\n");
     }
}