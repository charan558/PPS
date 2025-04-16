#include<stdio.h>
#include<math.h>
int main()
{
     float t,s,a=9.8,n;
     int i;
     printf("enter no of floors:\n");
     scanf("%f",&n);
     printf("enter time takenis");
     for(i=1;i<=n;i++)
     {
          s=3*i;
          t=sqrt(2*s/a);
          printf("%f",t);
     }
     return 0;
}