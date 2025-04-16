#include<stdio.h>
void main()
{
     int a,b,c;
     printf("enter a,b,c values\n");
     scanf("%d\n%d\n%d",&a,&b,&c);
     if(a>b && a>c)
     {
          printf("%d is maximum",a);
          if(b>c)
          {
               printf("%d is minimum",c);
          }
          else
               printf("%d is minimum",b);
     }
     else if(b>c && b>a)
     {
          printf("%d is maximum",b);
          if(a>c)
          {
               printf("%d is minimum",c);
          }
          else
               printf("%d is minimum",a);
     }
     else if(c>a && c>b)
     {
          printf("%d is maximum",c);
          if(a>b)
          {
               printf("%d is minimum",b);
          }
          else
               printf("%d is minimum",a);
     }
}