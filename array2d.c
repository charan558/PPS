#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("enter rows and columns");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("enter the elements \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d",&a[i][j]);
    }
    printf("\n");
}