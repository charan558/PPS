#include<stdio.h>
void main()
{
    int r1,c1,r2,c2,i,k,j;
    printf("enter rows and columns of first matrix");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and columns of second matrix");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],c[r1][c2];
    if(c1==r2)
    {
	  printf("enter the elements\n");
    
	  for(i=0;i<r1;i++)
	  {
	    for(j=0;j<c1;j++)
	    {
	      scanf("%d",&a[i][j]);
	    }
	  }
	  for(i=0;i<r2;i++)
	  {
 	   for(j=0;j<c2;j++)
 	   {
 	     scanf("%d",&b[i][j]);
 	   }
 	 }
 	 for(i=0;i<r1;i++)
 	 {
 	   for(j=0;j<c2;j++)
  	  {
 	     c[i][j]=0;
 	    for(k=0;k<c1;k++)
 	    {
 	      c[i][j]=c[i][j]+a[i][j]+b[i][j];
 	    }
 	  }
 	}
 	for(i=0;i<r1;i++)
	  {
 	   for(j=0;j<c2;j++)
 	   {
 	     printf("%d",c[i][j]);
 	   }
 	     printf("\n");
 	 }
 	 }
    else
    {
  	  printf("multiplication matrix is not possible");
    }
}
  
