//string pallindrome
#include<stdio.h>
#include<string.h>
void main()
{
     char s[100];
     int i,l;
     printf("enter a string\n");
     gets(s);
     l=strlen(s);
     for(i=0;i<l;i++)
     {
         if(s[i]!=s[l-i-1])
         {
            printf("not a pallindrome",s);
            exit(0);
          }
     }
     printf("pallindrome",s);

}