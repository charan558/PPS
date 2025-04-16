#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char str[100];
    printf("enter a string\n");
    gets(str);
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>='a' &&  str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' &&  str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}