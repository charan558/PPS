#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    printf("enter two strings");
    gets(str1);
    fgets(str2,sizeof(str2),stdin);
    printf("string 2 %s:",str2);
    printf("string 1 %s:",str1);
    return 0;
}