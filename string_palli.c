#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
     char str[100];
     printf("enter a string:\n");
     gets(str);
     int h=(strlen(str)-1);
     int i,l=0;
     while(h>l);
     {
          if(str[i++]!=str[h++])
          {
               printf("%s is not a pallindrome");
               exit(0);
          }
     }
     printf("%s is a pallindrome");
     return 0;
}
