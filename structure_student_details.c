//#include<stdio.h>
//void main()
struct student
{
     int id;
     int marks;
     char name[10];
}s1;
int main()
{
      //struct student s1;
     printf("enter the details of a student:\n");
     scanf("%d%d%s",&s1.id,&s1.marks,s1.name);
     printf("id=B%d\nmarks=%d\nname=%s\n",s1.id,s1.marks,s1.name);
}