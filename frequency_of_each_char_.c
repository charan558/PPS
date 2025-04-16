#include<stdio.h>
#include<string.h>
void main()
{
    int f,i;
    char s1[100];
    printf("enter a string:\n");
    gets(s1);
    printf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        f[s1[i]]++;
    }
    if(f[i]!=0)
    {
        printf("char %c occurs %d times",f[i]);
    }
}
