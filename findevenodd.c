#include<stdio.h>
void main()
{
    int n,even=0,odd=0,i;
    printf("enter no of elements");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            even++;
        else
            odd++;
    }
    printf("even=%d\n",even);
    printf("odd=%d\n",odd);
}