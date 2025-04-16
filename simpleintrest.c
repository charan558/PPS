#include<stdio.h>
#include<math.h>
void main()
{
     float si,p,t,r,A,x,c;
     printf(" enter p,t,r values\n");
     scanf("%f\n%f\n%f",&p,&t,&r);
     si=(p*t*r)/100;
     A=p+si;
     printf("simple ntrest is %f\n",si);
     printf(" amount is %f\n",A);
     x=1+(r/100);
     c=p*pow(x,t);
     printf("the compound intrest is %f",c);

}