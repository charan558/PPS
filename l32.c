#include<stdio.h>
void main()
{
	 int a ,b;
	 char ch;
	 printf("enter the operator");
	 scanf("%c",&ch);

	 printf("enter the values of a and b");
	 scanf("%d%d",&a,&b);
	// printf("enter the operator");
	 //scanf("%c",&ch);
	 switch (ch)
	 {	 
	 	case '+':
	   	printf("addition is=%d ",a+b);
	   	break;
	   	case '-':
	   	printf("sub is=%d ",a-b);	   
	   	break;	
	   	case '*':
	   	printf("mul is=%d ",a*b);
	   	break;
	   	case '/':
	   	printf("division is=%d ",a/b);
	   	break;
	   	default:
	   	printf("enter valid operator");
	  }
	  }
