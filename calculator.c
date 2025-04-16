#include<stdio.h>
void main()
{
     int mul,sum,div,sub,floatdiv,a,b;
     char operator;
     printf("enter a character operator +,-,/,*:\n");
     scanf("%c",&operator);
     printf("enter a and b values\n");
     scanf("%d%d",&a,&b);
     switch(operator)
     {
          case '+':sum=a+b;
          printf("add of %d and %d is %d",a,b,sum);
                    break;
           case '-':sub=a-b;
           printf("add of %d and %d is %d",a,b,sub);
                    break;
           case '*':mul=a*b;
           printf("add of %d and %d is %d",a,b,mul);
                    break;
           case '/':div=a/b;
           printf("add of %d and %d is %d",a,b,div);
                    break;
           case '%':floatdiv=a%b;
           printf("add of %d and %d is %d",a,b,floatdiv);
                    break;
          default:printf("enter a valid input");
                    break;



     }
}