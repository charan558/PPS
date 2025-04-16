// raed an array of 10 integer and count total no. of even and odd num



#include<stdio.h>
void main()
{
	int a[10], i,even=0,odd=0;
	printf("\n enter the values");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		 even=even+1;
		else
		 odd=odd+1;
	}
	printf("\n the total no. of even no.= %d",even);
	printf("\n the total no. of odd no.= %d",odd);
}
	
