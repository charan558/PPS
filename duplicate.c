#include<stdio.h>
void main()
{
     int n,i,j,d,c=0;
     printf("enter a num\n");
     scanf("%d",&n);
     printf("enter a num\n");
     scanf("%d",&d);
     int a[n];
     printf("enter the elements\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++ )
          {
               if(a[i]==a[j])
               {
                    c++;
                    break;
               }
          }
     }
     printf("duplicate %d",c);
}