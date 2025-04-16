//inserting element 
#include<stdio.h>
void main()
{
     int p,n,v,i;
     printf("enter the size of an array\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     printf("enter the size of position\n");
     scanf("%d",&p);
     if(p>n)
     {
          printf("invalid");
     }
     else
     {
          printf("enter the value\n");
          scanf("%d",&v);
          for(i=n-1;i>=p;i--)
          {
               a[i+1]=a[i];
          }
          a[p]=v;
          for(i=0;i<=n;i++)
          {
               printf("%d",a[i]);
          }
          
     }
}