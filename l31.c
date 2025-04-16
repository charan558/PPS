#include<stdio.h>
#include<math.h>
//a=9.8
void main()

{
	float s,t,n,i,a=9.8;
	printf(" no of fllors \n");
	scanf("%f",&n);
	printf("time to reach each floor\n");
	for(i=1;i<=n;i++)
	{
		s=3*i;
		t=sqrt(2*s/a);
		printf("%f seconds\n",t);
		
	}
}
	
		
