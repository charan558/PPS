#include<stdio.h>
#include<math.h>
void main()
{
     int n,sum=0,power=0,rem;
     printf("enter a num:\n");
     scanf("%d",&n);
     while(n!=0)
     {
          rem=n%10;
          sum+=pow(2,power++)*rem;
          n=n/10;
     }
     printf("decimal equivalent is %d",sum);
}
