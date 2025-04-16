#include<stdio.h>
#include<string.h>
void main()
{
    int l1,l2,i;
    char s1[100];
    char s2[100];
    printf("enter a string\n");
    scanf("%s",s1);
    printf("enter a string\n");
    scanf("%s",s2);
    strcat(s1,s2);
 /*  l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }*/
    printf("string after concatenation is %s",s1);
}
    