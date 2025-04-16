#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("enter the row and columns");
    scanf("%d%d",&r,&c);
    int a[r][c],t[c][r];
    printf("enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[i][j]=a[i][j];
            printf("t[%d][%d]=%d\n",j,i,t[j][i]);
        }
    }
}