#include<stdio.h>
int fact(int);
void main()
{
     int n;
     printf("enter n \n");
     scanf("%d",&n);
     fact(n);
    // printf("%d",fact(n));

}
int fact(int n)
{
     int i,fact=1;
     for(i=1;i<=n;i++)
     {
          fact=fact*i;
     }
     printf("%d",fact);
     return 0;
}