#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("enthe the value");
	for(n=1;n<101;n++)
	{
	  for (i=1 ; i<=n ;i++)
	  {
		
		if(n%i==0)
		count++ ;
	        if (count==2)
	        printf("%dprime",n);
	  }
	 }
		
}	
