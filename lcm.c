// lcm of given two nums

#include<stdio.h>
void main()
{	
	int a,b, max,lcm;
	printf("enter the values of A,B\n");
	scanf("%d%d",&a,&b);
	max=(a>b)?a:b;
	
	while(1)
	{
		if (max%a==0 && max%b==0)
		{
		lcm =max;
		break;
		}
		max++;
	}
	printf("lcm=%d",lcm);
}
