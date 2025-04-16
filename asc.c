#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 no.s");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c &&b>c)
    {
        printf("%d%d%d\n",a,b,c);
         printf("%d%d%d",c,b,a);
    }
    else if(b>a &&b>c && a>c)
    {
        printf("%d%d%d\n",b,a,c);
         printf("%d%d%d",c,a,b);
    }
    else if(a>b &&a>c &&c>b)
    {
        printf("%d%d%d\n",a,c,b);
        printf("%d%d%d",b,c,a);
    }
    else if(b>a && b>c && c>a)
    {
        printf("%d%d%d\n",b,c,a);
         printf("%d%d%d",a,c,b);
    }
    else if(c>a &&c>b &&a>b)
    {
        printf("%d%d%d\n",c,a,b);
         printf("%d%d%d",b,a,c);
    }
    else 
    {
        printf("%d%d%d\n",c,b,a);
         printf("%d%d%d",a,b,c);
    }
}
