#include<stdio.h>
#include<string.h>
void main()
{
    int a,i;
    char s1[30],s2[32];
    printf("enter two strings\n");
    gets(s1);
    gets(s2);
    //if(strcmp(s1,s2)
    for(i=0;s1[i]!='\0'|| s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            a=1;
            break;
        }
    }
    if(a==0)
    {
        printf("same");
    }
    else
        printf("not same");
}