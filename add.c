#include<stdio.h>
void sum(int ,int);
int main()
{
     int a,b;
     printf("enter a,b");
     scanf("%d%d",&a,&b);
     sum(a,b);
     return 0;
}
void sum(int a,int b)
{
     int c=a|b;
     printf("%d",c);
};