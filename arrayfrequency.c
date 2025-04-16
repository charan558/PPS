//frequency of an array
#include<stdio.h>
void main()
{
     int n,i,c=0,se;
     printf("enter a number");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     printf("enter search element");
     scanf("%d",&se);
     for(i=0;i<=n;i++)
     {
          if(se==a[i])
          {
               c=c+1;
          }
     }
     
     printf("no of occurenses=%d",c);
}