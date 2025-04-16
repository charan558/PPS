#include<stdio.h>
#include<string.h>
void main()
{
     char str[100];
     printf("enter the string;\n");
     gets(str);
     int n,p,i;
     printf("enter the position:\n");
     scanf("%d",&p);
     printf("enter no of characters to be delete:\n");
     scanf("%d",&n);
     int l=strlen(str);
     for(i=p+n;i<l;i++)
     {
          str[i-n]=str[i];
     }
     str[i-n]='\0';
     printf("%s",str);
}