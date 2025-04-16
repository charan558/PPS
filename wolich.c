#include<stdio.h>
void main()
{
     char s[100];
     char p='\0';
     int w=1,l=1,c=p,i;
     printf("enter a string\n");
     scanf("%[^*]",s);
     for(i=0;s[i]!='\0';i++)
     {
          if(s[i]==' ' || s[i]=='\t' || s[i]=='\n')
          {
               if(p!='\0' && p!='\t' && p!='\n' && p!=' ')
               {
                    w++;
               }
          }
          p=s[i];
          if(s[i]=='\n')
          {
               l++;
          }
          else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
          {
               c++;
          }
     }
     printf("%d",w);
     printf("%d",l);
     printf("%d",c);

}