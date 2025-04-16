/*

#include<stdio.h>
void main()
{
     int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
     if(a>b && a>c)
     {
          printf("%d is max",a);
          if(b>c)
          {
               printf("%d is min",c);
          }
          else
          {
               printf("%d is min",b);
          }
     }
     if(b>c && b>a)
     {
          printf("%d is max",b);
          if(a>c)
          {
               printf("%d is min",c);
          }
          else
          {
               printf("%d is min",a);
          }
     }
     if(c>b && c>a)
     {
          printf("%d is max",c);
          if(b>a)
          {
               printf("%d is min",a);
          }
          else
          {
               printf("%d is min",b);
          }
     }
     

}



#include<stdio.h>
#include<math.h>
void main()
{
     float si,p,t,r ;
     printf("enter p,t,r values");
     scanf("%f%f%f",&p,&t,&r);   
     si=(p*t*r)/100;
     printf("%f\n",si);
    float a=1+(r/100);
    float g=p*pow(a,t);
    printf("%f",g);



#include<stdio.h>
void main()
{
     int p=1,bin=0,n,r;
     printf("enter a num\n");
     scanf("%d",&n);
     int temp=n;
     while(n!=0)
     {
          r=n%2;
          bin=bin+(r*p);
          p=p*10;
          n=n/2;
     }
     printf("binary equivalent of %d is %d",temp,bin);
}


#include<stdio.h>
#include<math.h>
void main()
{
     float a=9.8,t,s,i;
     printf("time taken to reach each floor\n");
     for(i=1;i<=10;i++)
     {
          s=3*i;
          t=sqrt(2*s/a);
          printf("%f\n",t);
     }
}

// switch calculator
#include<stdio.h>
void main()
{
     int a,b;
     char operator;
     printf("enter char \n");
     scanf("%c",&operator);
     printf("enter a,b values\n");
     scanf("%d%d",&a,&b);
     switch(operator)
     {
          case '+': printf("sum=%d",a+b);
                    break;
          case '-': printf("sub=%d",a-b);
                    break;
          case '*': printf("mul=%d",a*b);
                    break;
          case '%': printf("rem=%d",a%b);
                    break;
          case '/': printf("quo=%d",a/b);
                    break;
     }
}




//prime


#include<stdio.h>
void main()
{
     int c=0,i,n;
     printf("enter n\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          if(n%i==0)
          {
               c++;
          }
     }
     if(c==2)
     {
          printf("%d is prime\n",n);
     }
     else
          printf("%d is not a prime",n);
}


//range prime


#include<stdio.h>
void main()
{
     int n,c,i,j;
     printf("enter n\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          c=0;
          for(j=1;j<=n;j++)
          {
               if(i%j==0)
               {
                    c++;
               }
          }
          if(c==2)
          {
               printf("%d\t",i);
          }
     }
//sumof digits and pallindrome


#include<stdio.h>
void main()
{
     int r=0,rem,n,sum=0;
     printf("enter n\n");
     scanf("%d",&n);
     int temp=n;
     while(n!=0)
     {
          rem=n%10;
          sum=sum+rem;
          r=r*10+rem;
          n=n/10;
     }
     printf("sumof digits is %d\n",sum);
     if(temp==r)
     {
          printf("%d is a pallindrome",r);

     }
     else
          printf("%d is not a pallindrome",temp);
}


//fibinocci series


#include<stdio.h>
void main()
{
     int f1=0,f2=1,f3,i;
     int n;
     printf("enter n\n");
     scanf("%d",&n);
     printf("the series is\n");
     for(i=0;i<n;i++)
     {
          printf("%d\t",f1);
          f3=f1+f2;
          f1=f2;
          f2=f3;
     }
}


//fibi recur
 #include<stdio.h>
 int fib(int n)
 {
     if(n==1)
          return 0;
     else if (n==2)
          return 1;
     else
          return fib(n-1)+fib(n-2);
 }
 void main()
 {
     int i,n;
     printf("enter n\n");
     scanf("%d",&n);
     printf("the series is\n");
     for(i=1;i<=n;i++)
       printf("%d\t",fib(i));

 }
 

 //quadratic roots


 #include<stdio.h>
 #include<math.h>
 void main()
 {
     float a,b,c,d,r1,r2;
     printf("enter a,b,c values\n");
     scanf("%f%f%f",&a,&b,&c);
     d=(b*b)-(4*a*c);
     if(d==0)
     {
          r1==r2;
          r1=(-b)/(2*a);
          printf("%f\n%f\n",r1,r2);

     }
     else if(d>0)
     {
          r1=(-b+sqrt(d))/(2*a);
          r2=(-b-sqrt(d))/(2*a);
          printf("%f\n%f\n",r1,r2);
     }
     else
          printf("roots are imaginary");
 }


 //expression 


 #include<stdio.h>
 #include<math.h>
 void main()
 {
     float x,n,s=1,t=-1,i;
     printf("enter x,n values\n");
     scanf("%f%f",&x,&n);
     for(i=1;i<=n;i++)
     {
          s=s+t*pow(x,i)/(2*i);
          t=t*(-1);
     }
     printf("%f",s);
 }



 //geometric


 #include<stdio.h>
 #include<math.h>
 void main()
 {
     int x,n,s=1,i;
     printf("Enter x,n values\n");
     scanf("%d%d",&x,&n);
     for(i=1;i<=n;i++)
     {
          s=s+pow(x,i);
     }
     printf("%d",s);
 }


 //geometric recur



 #include<stdio.h>
 #include<math.h>
 int geo();
 void main()
 {
     int x,n,i,s=1;
     printf("enter x,n values");
     scanf("%d%d",&x,&n);
     int p=geo(x,n);
    // for(i=1;i<=n;i++)
          printf("%d",p);
 }
 int geo(int n,int x)
 {
     int i,s=1;
     if(n==0)
     return 1;
     else 
          return s+pow(x,n);
 }

// min max avg of ARRAY
 #include<stdio.h>
 void main()
 {
     int n,min,max,i,sum=0;
     printf("enter the size of an array\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          sum=sum+a[i];
     }
     for(i=0;i<n;i++)
     {
     min=a[0];
     if(min>a[i])
     {
          min=a[i];
     }
     }
     for(i=0;i<n;i++)
     {
          max=a[0];
          if(max<a[i])
          {
               max=a[i];
          }
     }
     printf("avg=%d",sum/n);
     printf("max=%d",max);
     printf("min=%d",min);
 }



 //MEAN  VARIANCE  STD DEVIATION 


 #include<stdio.h>
 #include<math.h>
 void main()
 {
     int n,sum=0,mean=0,var=0,stddev=0,i;
     printf("enter n\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          sum=sum+a[i];
     }
     for(i=0;i<n;i++)
     {
          mean=sum/n;
          var=var+pow(a[i]-mean,2);
          stddev=stddev+pow(var/n,0.5);
     }
     for(i=0;i<1;i++)
     {
          printf("mean = %d\n",mean);
          printf("variance=%d\n",var/n);
          printf("stddev=%d\n",stddev/n);
     }
 }



 // addition matrix


 #include<stdio.h>
 void main()
 {
     int r1,c1,r2,c2,i,j;
     printf("enter matrix 1 size \n");
     scanf("%d%d",&r1,&c1);
     printf("enter matrix 2 size \n");
     scanf("%d%d",&r2,&c2);
     int a[r1][c1],b[r2][c2],c[c1][c2];
     if(r1==r2 && c1==c2)
     {
          printf("enter the matrix 1 elements\n");
          for(i=0;i<r1;i++)
          {
               for(j=0;j<c1;j++)
               {
                    scanf("%d",&a[i][j]);
               }
          }
          printf("enter the matrix 2 elements\n");
          for(i=0;i<r2;i++)
          {
               for(j=0;j<c2;j++)
               {
                    scanf("%d",&b[i][j]);
               }
          }
        //  printf("enter the matrix 1 elements\n");
          for(i=0;i<r1;i++)
          {
               for(j=0;j<c1;j++)
               {
                    c[i][j]=a[i][j]+b[i][j];
                    printf("%d\t",c[i][j]);
               }
               printf("\n");
          }
     }
 }

 //mul matrix


 #include<stdio.h>
 void main()
 {
     int r1,c1,r2,c2,i,k,j;
     printf("enter matrix 1 size \n");
     scanf("%d%d",&r1,&c1);
     printf("enter matrix 2 size \n");
     scanf("%d%d",&r2,&c2);
     int a[r1][c1],b[r2][c2],c[r1][c2];
     if(c1==r2)
     {
          printf("enter the matrix 1 elements\n");
          for(i=0;i<r1;i++)
          {
               for(j=0;j<c1;j++)
               {
                    scanf("%d",&a[i][j]);
               }
          }
          printf("enter the matrix 2 elements\n");
          for(i=0;i<r2;i++)
          {
               for(j=0;j<c2;j++)
               {
                    scanf("%d",&b[i][j]);
               }
          }
        //  printf("enter the matrix 1 elements\n");
          for(i=0;i<r1;i++)
          {
               for(j=0;j<c2;j++)
               {
                    c[i][j]=0;
                    for(k=0;k<c1;k++)
                    {
                    c[i][j]+=a[i][k]*b[k][j];
                    }
               }
          }
          for(i=0;i<r1;i++)
          {
               for(j=0;j<c1;j++)
               {
                    printf("%d\t",c[i][j]);
               }
               printf("\n");
          }
     }
 }


 //transpose of a matrix

 #include<stdio.h>
 void main()
 {
     int r1,c1,i,j;
     printf("enter matrix 1 size \n");
     scanf("%d%d",&r1,&c1);
     int a[r1][c1];
          printf("enter the matrix 1 elements\n");
          for(i=0;i<r1;i++)
          {
               for(j=0;j<c1;j++)
               {
                    scanf("%d",&a[i][j]);
               }
          }
          printf("enter the matrix 2 elements\n");
          for(i=0;i<r1;i++)
          {
               for(j=0;j<c1;j++)
               {
                    printf("%d\t",a[j][i]);
               }
               printf("\n");
          }
     
 }



//factorial


#include<stdio.h>
int fact(int);
void main()
{
     int n;
     printf("enter any number\n");
     scanf("%d",&n);
     int f=fact(n);
     printf("factorial=%d",f);
     
}
int fact(int n)
{
     int i,f=1;
     for(i=1;i<=n;i++)
     {
          f=f*i;
     }
     return f;
}


//factorial with recursion


#include<stdio.h>
int fact(int);
int main()
{
     int n;
     printf("enter a num\n");
     scanf("%d",&n);
     int f=fact(n);
     printf("factorial=%d",f);
};
int fact(int n)
{
     int f=1;
     if(n==0)
     {
          return 0;
     }
     else if(n==1)
     {
          return 1;
     }
     else 
          return n*fact(n-1);
}


//gcd of two integers


#include<stdio.h>
int gcd();
int main()
{
     int a,b;
     printf("enter a,b values\n");
     scanf("%d%d",&a,&b);
     int d=gcd(a,b);
     printf("gcd =%d",d);
}
int gcd(int a,int b)
{
     int i;
     int max=(a>b)?a:b;
     int min=(a>b)?b:a;
     for(i=min/2;i<=1;i--)
     {
          if(max%i==0 && min%i==0)
          return i;
          else
               return 1;
     }
}


//gcd with recursion


#include<stdio.h>
int gcd(int, int);
int main()
{
     int a,b;
     printf("enter a,b values\n");
     scanf("%d%d",&a,&b);
     int g=gcd(a,b);
     printf("GCD=%d",g);
}
int gcd(int a,int b)
{
     int max=(a>b)?a:b;
     int min=(a<b)?a:b;
     if(min!=0)
     {
          return gcd(min,max%min);
     }
     else
     {
          return max;
     }
}

//x^n 


#include<stdio.h>
#include<math.h>
int exp();
int main()
{
     int n,x;
     printf("enter x,n values\n");
     scanf("%d%d",&x,&n);
     int e=pow(x,n);
     printf("%d",e);
}
int exp(int x,int n)
{
     if(n==0)
     {
          return 1;
     }
     else 
       return x*exp(x,n);
}



//power with out recur


#include<stdio.h>
int exp();
int main()
{
     int x,n;
     printf("enter x,n values\n");
     scanf("%d%d",&x,&n);
     int e=pow(x,n);
     printf("%d",e); 
}
int exp(int x,int n)
{
     int k;
     k=k*x;
     return k;
}
  // pointer array and reverse ,sum

  #include<stdio.h>
  void main()
  {
     int n,i,*p,sum=0;
     printf("enter size\n");
     scanf("%d",&n);
     int a[n];
     p=a;
     printf("enter the elements");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          sum=sum+*(p+i);
     }
     for(i=0;i<n;i++)
     {
          printf("%d\t",*(p+i));
     }
     printf("\n");
     for(i=n-1;i>=0;i--)
     {
          printf("%d\t",*(p+i));
     }
          printf("\nsum=%d",sum);
     
  }


//roman to numerical

#include<stdio.h>
#include<string.h>
void main()
{
     int d[30],i,dec=0,l;
     char rom[30];
     printf("enter any char\n");
     scanf("%s",rom);
     l=strlen(rom);
     for(i=0;i<l;i++)
     {
          switch(rom[i])
          {
               case 'I':d[i]=1;
                    break;
               case 'V':d[i]=5;
                    break;
               case 'X':d[i]=10;
                    break;
               case 'L':d[i]=50;
                    break;
          }
     }
     dec=d[l-1];
     for(i=l-1;i>0;i--)
     {
          if(d[i]>d[i-1])
          {
               dec=dec-d[i];
          }
          else if (d[i]<=d[i-1])
          {
               dec=dec+d[i];
          }
     }
     printf("%d",dec);
}


//decimal to roman



#include<stdio.h>
#include<string.h>
void main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     printf("roman num\n");
     while(n!=0)
     {
          if(n>=50)
          {
               printf("L");
               n=n-50;

          }
          else if(n>=40)
          {
               printf("XL");
               n=n-40;
          }
          else if (n>=10)
          {
               printf("X");
               n=n-10;
          }
          else if (n>=9)
          {
               printf("IX");
               n=n-9;
          }
          else if(n>=5)
          {
               printf("V");
               n=n-5;
          }
          else if(n>=4)
          {
               printf("IV");
               n=n-4;
          }
          else
          {
               printf("I");
               n=n-1;
          }

     }
}



//string pallindrome


#include<stdio.h>
#include<string.h>
void main()
{
     int l,i;
     char s1[30];
     printf("enter astring");
     gets(s1);
     l=strlen(s1);
     for(i=0;i<l;i++)
     {
          if(s1[i]!=s1[l-i-1])
          {
               printf(" %s is not a pallindrome",s1);
               exit(0);
          }
     }
     printf(" %s is  a pallindrome",s1);
     
}


//character occurances in a string

#include<stdio.h>
#include<string.h>
void main()
{
     char s1[100];
     char s;
     int i,c=0;
     printf("enter a string\n");
     gets(s1);
     printf("enter search key\n");
     scanf("%c",&s);
     for(i=0;s1[i]!='\0';i++)
     {
          if(s==s1[i])
          {
               c++;
          }
     }
     printf("%d times",c);
}




//deleting no of chars from a given position


#include<stdio.h>
#include<string.h>
void main()
{
     char s[100];
     printf("enter a string");[]
     scanf("%s",s);
     int i,n,p;
     printf("enter position and no. of characters to delete\n");
     scanf("%d%d",&p,&n);
     int l=strlen(s);
     for(i=p+n;i<l;i++)
     {
          s[i-n]=s[i];
     }
     s[i-n]='\0';
     printf("%s",s);p
}


 

//linear search



#include<stdio.h>
#include<stdlib.h>
void main()
{
     int n,k,i;
     printf("enter the size of an array\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     printf("enter search element\n");
     scanf("%d",&k);
     for(i=0;i<n;i++)
     {
          if(k==a[i])
          {
               printf("element fount\n");
               exit(0);
          }
     }
     printf("not found");
}



//binary search 


#include<stdio.h>
#include<stdlib.h>
void main()
{
     int i,n,j,t;
     printf("enter the array \n");
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          for(j=0;j<n-i-1;j++)
          {
               if(a[j]>a[j+1])
               {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
               }
          }
     }
     for(i=0;i<n;i++)
     {
          printf("%d\t",a[i]);
     }
     int k;
     printf("\nenter the search element\n");
     scanf("%d",&k);
     int l=0,h=n-1,m;
     m=(l+h)/2;
     while(l<=h)
     {
          if(a[m]==k)
          {
               printf("element found");                                                                                                                                                                        
               exit(0);
          }
          else if (a[m]<k)
          {
               l=m+1;
          }
          else
               h=m-1;
               m=(h+l)/2;
     }
     printf("element not found");
}


//insertion sort


#include<stdio.h>
void main()
{
     int n,i,j,t;
     printf("enter array size\n");
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(i=1;i<n;i++)
     {
          t=a[i];
          for(j=i-1;j>=0 && t<a[j];j--)
          {
               a[j+1]=a[j];
          }
          a[j+1]=t;
     }
     for(i=0;i<n;i++)
     printf("%d",a[i]);
}
*/

//selection sort


#include<stdio.h>
void main()
{
     int i,j,min,n;
     printf("enter array size\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n-1;i++)
     {
          min=i;
          for(j=i+1;j<n;j++)
          {
               if(a[min]>a[j])
               min=j;
          }
          if(a[min]!=i)
          {
              int t=a[min];
               a[min]=a[i];
               a[i]=t;
          }
     }for(i=0;i<n;i++)
     {
          printf("%d",a[i]);
     }
}

