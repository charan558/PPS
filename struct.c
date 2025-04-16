//#include<stdio.h>
struct student
{
     int no;
     float marks;
     char name[100];
};
void main()
{
     int i,n;
     printf("enter the no od details\n");
     scanf("%d",&n);
     struct student s[n];
     printf("enter the details \n");
     for(i=0;i<n;i++)
     {
     scanf("%d%f%s",&s[i].no,&s[i].marks,s[i].name);
     }
     for(i=0;i<n;i++)
     {
           printf("no=%d\nmarks=%f\nname=%s\n",s[i].no,s[i].marks,s[i].name);
     }
}