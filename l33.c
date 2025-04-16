#include<stdio.h>
#include<math.h>
void main()
{
	int t=-1,s=1,n,i,x;
	printf("enter the value of x ; \n");
	scanf("%d",&x);
	printf("no. of terms ; ") ;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	s= s+t*(pow(x,i))/(2*i);
	t=t*(-1);
	}
	printf("\n%d",s);
	
}
	
