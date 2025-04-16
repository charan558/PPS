#include<stdio.h>
struct student
{
     char name[30];
     int id;
};
void main()
{
     struct student s1={"abc",1},s2={"def",2},*p1,*p2;
     p1=&s1;
     p2=&s2;
     printf("%s%d\n",p1->name,p1->id);
     printf("%s%d",p2->name,p2->id);
}