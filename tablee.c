#include<stdio.h>
void main()
{
     int n,i,m;
     printf("enter table");
     scanf("%d",&n);
     printf("enter no of rows");
     scanf("%d",&m);
     for(i=1;i<=m;i++)
     {
          printf("%d*%d=%d\n",n,i,n*i);
     }

}