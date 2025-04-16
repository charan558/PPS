#include<stdio.h>
#include<string.h>
void main()
{
     char s1[30],s2[30];
    int n;
     printf("enter the string\n");
     printf("enter string\n");
     gets(s1);
     gets(s2);
    printf("enter n value\n");
     scanf("%d",&n);
    // strcat(s1,s2);
     //strncat(s1,s2,n);
     //strcpy(s1,s2);
     strncpy(s1,s2,n);
     puts(s1);
}