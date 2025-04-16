#include<stdio.h>
void main()
{
     int i,j;
     char ch;
     printf("enter a char");
     scanf("%c",&ch);
     for(i=1;i<=5;i++)
     {
          for(j=1;j<=i;j++)
          {
               if(ch>='A' && ch<='Z')
               {
                    printf("%c",ch);
               }
          }printf("\n");
          ch++;
     }
}