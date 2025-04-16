#include<stdio.h>
void sum(int,int)
int main()
{
     int a,b;
     printf("entr a,b values\n:");
     scanf("%d%d",&a,&b);
     sum(a,b);
}
void sum(int a,int b)
{
     int c=a+b;
     printf("sum=%d",c);
}