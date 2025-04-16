#include<stdio.h>
int fact(int);
void main()
{
     int n;
     printf("enter a no:\n");
     scanf("%d",&n);
     int f=fact(n);
     printf(" factorial =%d",f);
}
int fact(int n)
{
     int f=1,i;
     for(i=1;i<=n;i++)
     {
          f=f*i;
     }
     return f;
}