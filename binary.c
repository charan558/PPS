#include<stdio.h>
void main()
{
     int n,r=0,bin=0,p=1;
     printf("enter a no:\n");
     scanf("%d",&n);
     while(n!=0)
     {
          r=n%2;
          n=n/2;
          bin=bin+(r*p);
          p=p*10;
     }
     printf("binary equavalent id %d",bin);
}