#include<stdio.h>
void main()
{
     int i,j,n,c=0;
     printf("enter n=");
     scanf("%d",&n);
     for(i=1;n%i==0;i++)
     {
     for(j=1;i%j==0;j++)
     {
     c++;
     for(c==2;;)
     {
     printf("%d",i);
     }
     }
   }  
}
