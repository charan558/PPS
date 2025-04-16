#include<stdio.h>
void main()
{
    int m,n,i,j,sr,sc;
    printf("enter the size of matrix\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
         printf("\n");
    }
    for(i=0;i<m;i++)
  
    {
          sr=sc=0;
        for(j=0;j<n;j++)
        {
        sr=sr+a[i][j];
        sc=sc+a[j][i];
        }
         printf("sr=%d\n",sr);
         printf("sc=%d\n",sc);
    }
}