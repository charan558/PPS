#include<stdio.h>
#include<math.h>
void main()
{
     int n,i,mean=0,var=0,stddev=0,sum=0;
     printf("enter the no of elements:\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements:\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          sum=sum+a[i];
     }
     mean=sum/n;
     for(i=0;i<n;i++)
     {
          var=var+pow(a[i]-mean,2);
          stddev=stddev+pow(var,0.5);
          printf("variance=%d",var/n);
          printf("standard deviation=%d",stddev);
     }
   /*  for(i=0;i<n;i++)
     {
          for(j=i+1;j<n-1;j++)
          {
               if(a[i]>a[j])
               {
                    t=a[i];
                    a[i]=a[j];
                    t=a[j];
               }
          }
     }
     for(i=0;i<n;i++)
     {
          printf("%d",a[i]);
     }*/
}