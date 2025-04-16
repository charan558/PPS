#include<stdio.h>
void main()
{
	int n,i,j,count;
	printf("enthe the range");
	scanf("%d",&n);
	for (i=1 ; i<=n ;i++)
	
	{
		count=0;
		for(j=1;j<=i;j++)
		{
		if (i%j==0)
		count++;
		//break;
		}
		if (count==2)
		printf("%d\t",i);
	
		
	}
	
}	
