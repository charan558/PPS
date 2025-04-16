#include<stdio.h>
void main()
{
     int r=0,rev=0,temp,n,sum=0;
     printf("enter n value");
     scanf("%d",&n);
     temp=n;
     while(n!=0)
     {
          r=n%10;
          sum=sum+r;
          rev=rev*10+r;
          n=n/10;
     }
     if(temp==rev)case'+':printf("sum is %d",a+b);
                    break;
          printf("pallindrome");
     else
          printf("not apallindrome");
     printf("sum of digits of a number is %d",sum);
}