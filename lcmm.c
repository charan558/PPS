//lcm of two numbers
#include<stdio.h>
void main()
{
     int a,b,lcm,fact=1;
     printf("enter a ,b values\n");
     scanf("%d%d",&a,&b);
     lcm=(a>b)?a:b;
     while(fact)
     {
          if(lcm%a==0 && lcm%b==0)
          {
               printf("lcm of %d and %d is%d",a,b,lcm);
               fact=0;
          }
          lcm++;
     }
}