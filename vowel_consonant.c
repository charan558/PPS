#include<stdio.h>
#include<string.h>
void main()
{
    int i,v=0,c=0;
    char str[100];
    printf("enter a string:\n");
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            v++;
            // printf("%s",str[i]);
        }
        else
        {
            c++;
            // printf("%s",str[i]);
        }
    }
    printf("%d%d",v,c);
}