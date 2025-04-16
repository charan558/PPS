#include<stdio.h>
#include<string.h>
struct student
{
     char name[30];
     int id;
};
void main()
{
     int n,i;
     printf("enter n value\n");
     scanf("%d",&n);
     struct student s[n];
    // printf("enter nam \n");
     //scanf("%d",&nam);
     int ik;
     char ij[30];
     for(i=0;i<n;i++)
     {
          printf("enter name and id of student %d",i+1);
          scanf("%s\t%d",s[i].name,&s[i].id);
     }
      printf("Enter id");
     scanf("%d",&ik);
     for(i=0;i<n;i++)
     {
          if(ik==s[i].id)
          {
               printf("%s\t%d",s[i].name,s[i].id);
          }
         /* else
          printf("Enter name");
           scanf("%s",ij);
          for(i=0;i<n;i++)
          {
           if(strcmp(ij,s[i].name))
          {
               printf("%s\t%d",s[i].name,s[i].id);
          }
          }*/
          

          
     }
     
     
}