#include<stdio.h>
void main()
{
    int n,i,min,max,average,sum=0;
    printf("enter the array size");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    average=sum/n;
    printf("average is %d\n",average);
    printf("minimum is %d\n",min);
    printf("maximum is %d\n",max);
}