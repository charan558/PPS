#include<stdio.h>
struct student
{
     char name[30];
     int id;
     char branch[20];
};
void main()
{
      int n,i;
     printf("enter n value\n");
     scanf("%d",&n);
     struct student s[n];
     //int s[n];
     for(i=0;i<n;i++)
     {
          printf("enter the details of %d student:\n",i+1);
          scanf("%s%d%s",s[i].name,&s[i].id,s[i].branch);
     }
     for(i=0;i<n;i++)
     {
          printf("%s%d%s",s[i].name,s[i].id,s[i].branch);


     }
     
}