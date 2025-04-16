#include<stdio.h>
 void main()
 {
     int a,b;
     char operator;
     printf("enter a,b values:\n");
     scanf("%d%d",&a,&b);
     printf("enter a operator:\n");
     scanf("%c",&operator);
     switch(operator)
     {
          case'+':printf("sum is %d",a+b);
                    break;
          case'-':printf("subtract is %d",a-b);
                    break;
          case'*':printf("mul is %d",a*b);
                    break;
          case'/':printf("division is %d",a/b);
                    break;
          default:printf("enter a valid input");
     }
 }