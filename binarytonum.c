#include<stdio.h>
#include<math.h>
void main()
{
     int power=0,sum=0,i,n,rem;
     printf("enter a binary no.:\n");
     scanf("%d",&n);
     while(n!=0)
     {
          rem=n%10;
          sum=sum+pow(2,power++)*rem;
          n=n/10;
     }
     printf("binary equivalent no is %d",sum);
}