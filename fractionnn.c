#include<stdio.h>
#include<math.h>
void main()
{
     int s=1,t=-1,n,x,i;
     printf("enter x term:\n");
     scanf("%d",&x);
     printf("enter no of terms:\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          s=(s*t+(pow(x,i)/2*i));
          t=t*(-1);
     }
     printf("%d",s);
}