#include<stdio.h>
void main()
{
    int m,n,i,j,sum=0;
    printf("enter the size of row and colums of a matrix");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nsum=%d",sum);
}