//length of a string
#include<stdio.h>
void main()
{
     char ch[100];
     int i,l;
     printf("enter the string");
     gets(ch);
     l=0;
     for(i=0;ch[i]!='\0';i++)
     {
          l++;
     }
     printf("length of  a string is %d",l);
}