//identity matrix
#include<stdio.h>
void main()
{
     int r,c,i,j,f=1;
     printf("Enter the rows and colums of a matrix\n");
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
               if(a[i][j]!=1 && a[j][i]!=0)
               {
                    f=0;
                    break;
               }
          }
     }
     if(f==1)
     {
          printf("identity");
     }
     else
     {
          printf("not an identity");
     }     
}
