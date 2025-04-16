#include<stdio.h>
void main()
{
     int n,i,j,c=0;
     printf("enter a no.:\n");
     scanf("%d",&n);
     for(i=1;n%i==0;i++)
     {
     	for(j=1;i%j==0;j++)
     	{
     	c++;
     	if(c==2)
     	{
     	printf("%d",i);
     	}
     	}
     }
          
}
