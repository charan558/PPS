#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char s1[100];
    printf("enter a string:\n");
    gets(s1);
    int i;
    int h=(strlen(s1)-1);
    int l=0;
    while(h>l)
    {
        if(s1[i++]!=s1[h--])
        {
            printf("is not a pallindrome\n");
            exit(0);
        }
    }
    printf(" palindrome");
}