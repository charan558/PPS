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
     if(n<=1)
     {
          return 1;
     }
     else
     {
          return n*fact(n-1);
     }
}