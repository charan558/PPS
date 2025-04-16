// occurance of a char in a string
#include<stdio.h>
#include<string.h>
void main()
{
     char s[100],ch;
     int i,c=0;
     printf("enter a string\n");
     gets(s);
     printf("enter a char");
     scanf("%c",&ch);
     for(i=0;s[i]!='\0';i++)
     {
          if(ch==s[i])
          c++;
     }
     printf("%d",c);
}