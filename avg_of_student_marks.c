struct student 
{
     int marks;
};
int main()
{
     int i,avg=0;
     struct student s[5];
     for(i=0;i<5;i++)
     {
          printf("enter marks of a student :\n");
          scanf("%d",&s[i].marks);

     }
     for(i=0;i<5;i++)
     {
          avg+=s[i];
          printf("avg of a student marks id %d",avg/5);
     }
}