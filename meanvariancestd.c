#include<stdio.h>
#include<math.h>
void main()
{
    int n,i;
    float mean,variance,std,sum=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        variance=variance+pow(a[i]-mean,2);
        variance=variance/n;
    }
     printf("mean is %f",mean);
     printf("variance if %f",variance);
     printf("standard deviation is %f",sqrt(variance));
}
