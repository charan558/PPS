#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,j,temp;
    printf("enter the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the ele\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp[j]=a[i];
                a[i]=a[j];
                a[i]=temp[j];
            }
            printf("%d",a[i]);
        }
    }
}
