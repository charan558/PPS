#include<stdio.h>
#include<string.h>
void main() 
{
     char s[100];
     int i,p,n;
     printf("enter a string\n");
     scanf("%s",s);
     printf("enter no terms to delete\n");
     scanf("%d",&n);
     printf("enter position\n");
     scanf("%d",&p);
     int l=strlen(s);
     for(i=p+n;i<l;i++)
     {
          s[i-n]=s[i];
     }
     s[i-n]='\0';
     printf("%s",s);
}