#include<stdio.h>
void main()
{
	int a[2][3],i,j;
	printf("enter the numbers \n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
}
		
