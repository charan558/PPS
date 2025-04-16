#include<stdio.h>
#include<string.h>
void main()
{
     int i,l;
     char str[100];
     printf("entr the char:\n");
     gets(str);
     l=strlen(str);
     for(i=0;i<l;i++)
     {
          if(str[i]>='a' && str[i]<='z')
          {
               str[i]=-32;
          }
          else if(str[i]>='A' && str[i]<='Z')
          {
               str[i]=+32;
          }
     }
     printf("%s",str);
}