#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
     char str[100];
     printf("enter a string:\n");
     fgets(str,strlen(str),stdin)
     int l=(strlen(str)-1);
     int i,n=0;
     for(i=0;i<l;i++)
     {
          if(str[i]!=str[l-i])
          {
               n=1;
               break;
          }
     }
     if(n)
     {
       printf("%s is  not a pallindrome");
     }
     else
          printf("%s is a pllindrome");

     return 0;
}
