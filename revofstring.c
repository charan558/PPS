#include<stdio.h>
#include<string.h>
void main()
{
    int l=0,i;
    char s1[100],ch;
    printf("enter a string:\n");
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("reverse of a string is %s\n",s1);
}