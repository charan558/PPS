#include<stdio.h>
void main()
{
     int r,c,i,j,sum=0;
     printf("enter row and column \n");
     scanf("%d%d",&r,&c);
     int a[r][c];
     printf("enter the elements\n");
     for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
          {
               scanf("%d",&a[i][j]);
          }
     }
     for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
          {
               if(i==j)
               {
                    sum=sum+a[i][j];
               }
          }
     }
     for(i=0;i<r;i++)
     {
          printf("%d",sum);
     }
}