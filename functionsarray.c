#include<stdio.h>
int minfun();
int maxfun();
float avgfun();
int sumfun();
int main()
{
    int n,i,check=-1,sum=0;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(check!=0)
    {
        printf("\nEnter the choice\n1 for minimum number \n2 for maximum number \n3 for average and sum\n0 to exit the loop and program\n");
        scanf("%d",&check);
        switch(check)
        {
            case 1: printf("Minimum=%d\n",minfun(a,n));
                    break;
            case 2: printf("Maximum=%d\n",maxfun(a,n));
                    break;
            case 3: 
                    printf("Average=%.3f\n",avgfun(a,&sum,n));
                    printf("Sum=%d\n",sum);
                    break;
            case 0: printf("Program succesfully executed\n");
                    break;
           default: printf("Invalid entry\n");
       }
       printf("--------------------------------");
   }
   return 0;
}
int minfun(int a[],int n)
{
    int i, min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }           
    return min;
}
int maxfun(int a[],int n)
{
    int i,max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
float avgfun(int a[],int *sum,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *sum+=a[i];
    }
    return ((float)*sum/n);
}    
                                           
                                   
        
        