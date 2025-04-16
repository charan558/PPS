#include<stdio.h>
void main()
{
	int max, i, j, count;
	printf("enter the values of max ; ");
	//scanf("%d",&max);
	for(i=1;i<=100;i++)	/* i defines number*/	        count=0;
		for(j=1;j<=i;j++) // j defines multiples 
		{
		if(i%j==0)
		count++;
		}
		if (count==0)
		printf("%d  ",i);
		
}
		
