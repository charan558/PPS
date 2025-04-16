/* read two array of size 5 and sum and store the of the corresponding elements in third array */



#include<stdio.h>
void main()
{
	int a[5],b[5],c[5],i;
	printf("\n enter the values for first matrix");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the values for second matrix");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
	c[i]=a[i]+b[i];
	printf("\n sum of two matrix =m %d",c[i]);
		
	}
}	
