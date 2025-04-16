// sum and avg of array elements 



#include<stdio.h>
void main()
{
	int marks[5], i, sum=0,avg;
	printf("\n enter the values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("\nthe sum of elements=%d",sum);
	printf("\nthe avg of elements=%d",avg);	
}
	
	
