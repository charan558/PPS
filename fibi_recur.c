#include<stdio.h>
int fib(int);
void main()
{
     int n;
     printf("enter a no:\n");
     scanf("%d",&n);
     int fib(n);
     for(int i=0;i<n;i++)
     printf(" fibinocci =%d",fib(i));
}
int fib(int n)
{
     if(n==0)
     {
          return 0;
     }
     else if(n==1)
     {
          return 1;
     }
     else
     {
          return fib(n-1)+fib(n-2);
     }
}
