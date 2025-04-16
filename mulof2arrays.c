#include<stdio.h>
void main()
{
    int m,n,i;
    printf("enter the array size of m\n");
    scanf("%d",&m);
    printf("enter the size of n\n");
    scanf("%d",&n);
    int a[m],b[n],c[m];
    printf("the elements of m\n");
    if(m==n)
    {
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("the elements of n\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        printf("sumof two arrays is\n");
        for(i=0;i<m;i++)
        {
            c[i]=a[i]*b[i];
            printf(" %d*%d=%d\n",a[i],b[i],c[i]);
        }
    }
    else
    {
        printf("product of arrays is not possible\n");
    }
}