#include<stdio.h>
#include<string.h>
void main()
{
     char str1[100];
     char str2[100];
     printf("enter the 1st string:\n");
     gets(str1);
     printf("enter the 2nd string:\n");
     gets(str2);
     int l1=strlen(str1);
     int l2=strlen(str2);
     int i,p;
     printf("enter the position:\n");
     scanf("%d",&p);
     for(i=p;i<l1;i++)
     {
          str1[l2+i]=str1[i];
     }
     for(i=0;i<l2;i++)
     {
          str1[p+i]=str2[i];
     }
     printf("%s",str1);
}