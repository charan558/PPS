#include<stdio.h>
void main()
{
     int n;
     printf("enter marks percent\n");
     scanf("%d",&n);
     if(n<40)
     printf("failed");
     else if(n>=40 && n<60)
     printf("second class");
     else if(n>=60 && n<70)
     printf("first class");
     else if(n>=70)
     printf("distinction");
}