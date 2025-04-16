#include<stdio.h>
void sum(int[],int);
int main()
{
     int n,i,s=0;
     printf("enter a no\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          s=s+a[i];
     }
     sum(a,n);
     return 0;
}
void sum(int[],int n)
{
     int i,s=0;
     for(i=0;i<n;i++)
     {
          printf("%d",s);
     }
};