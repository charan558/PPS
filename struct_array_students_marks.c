struct student 
{
     int id;
     int marks;
     char name[50];
};
int main()
{struct student s[5];
     int i;
     for(i=0;i<5;i++)
     {
     printf("enter details of student %d\n",i+1);
     scanf("%d%d%s",&s[i].id,&s[i].marks,s[i].name);
     }
     for(i=0;i<5;i++)
     {
          printf("details of student %d\n",i+1);
          printf("id=B%d\nmarks=%d\nname=%s\n",s[i].id,s[i].marks,s[i].name);
     }
}