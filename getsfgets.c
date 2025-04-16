#include<stdio.h>
void main()
{
    char str1[100];
    char str2[100];
    printf("enter a name");
    printf("enter another name");
    gets(str1);
    fgets(str2,sizeof(str2),stdin);
    printf(" %s",str2);
    printf(" %s",str1);
}