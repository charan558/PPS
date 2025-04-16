#include<stdio.h>
#include<math.h>
void main()   
{
     float a,b,c,r1,r2,d;
     printf("enter a,b,c values:\n");
     scanf("%f%f%f",&a,&b,&c);
     d=b*b-(4*a*c);
     if(d==0)
     {
          printf("roots are real and equal");
          r1=(-b/2*a);
          r2=r1;
          printf("roots %f\n%f",r1,r2);

     }
     else if (d>0)
     {
          printf("roots are real and distinct:\n");
          r1=(-b+sqrt(d))/(2*a);
          r2=(-b-sqrt(d))/(2*a);
          printf("%f\n,%f",r1,r2);
     }
     else
     {
        ///2*a;
     //     r2=sqrt(-d)/2*a;
          printf("roots are imaginar ");
     }
}