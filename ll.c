#include<stdio.h>
#include<stdlib.h>
void insert();
void insertatend();
void insertatbeg();
void insertatpos();
void deleteatend();
void deleteatbeg();
void deleteatpos();
void display();
int c=0,choice;
struct node
{
     int data;
     struct node*next;
}*header,*new,*temp,*temp1;
struct node *create()
{
     new=malloc(sizeof(struct node));
     printf("enter data");
     scanf("%d",&new->data);
     new->next=NULL;
     return new;
}
void insertatbeg()
{
     new=create();
     if(header==NULL)
     {
          new->next=NULL;
          header=new;
     }
          new->next=header;
          header=new;
     c++;
}
void insertatend()
{
     new=create();
     temp=header;
     while(temp->next!=NULL)
     {
          temp=temp->next;
     }
     new->next=NULL;
     temp->next=new;
     c++;
}
void insertatpos()
{
     int i,pos;
     printf("enter the position\n");
     scanf("%d",&pos);
     if(pos==1)
     {
          insertatbeg();
     }
     else if(pos==c)
     {
          insertatend();
     }
     else if(pos<c)
     {
          new=create();
          temp=header;
          for(i=1;i<pos-1;i++)
          {
               temp=temp->next;
          }
          new->next=temp->next;
          temp->next=new;
          c++;
     }
}
void deleteatbeg()
{
     temp=header;
     header=temp->next;
     free(temp);
     c--;
}
void deleteatend()
{
     temp=temp1=header;
     while(temp->next!=NULL)
     {
          temp1=temp;
          temp=temp->next;
     }
     temp1->next=NULL;
     free(temp);
     c--;
}
void deleteatpos()
{
     int i,pos;
     printf('enter the position\n');
     scanf("%d",&pos);
     temp=temp1=header;
     if(pos==1)
     {
          deleteatbeg();
     }
     else if(pos==c)
     {
          deleteatend();
     }
     else if(pos<c)
     {
          for(i=1;i<pos-1;i++)
          {
               temp=temp->next;
               temp1=temp->next;
          }
          temp->next=temp1->next;
          free(temp1);
     }
}
void display()
{
          for(temp=header;temp!=NULL;temp=temp->next);
          {
               printf("%d",temp->data);
          }
     
}
void main()
{
     while(choice!=-1)
     {
          printf("1 insert at begin 2. at end 3. at pos\n4 display \n5.delete at begin  6 at end  7 at pos\n8.exit\n");
          printf("enter the choice\n");
          scanf("%d",&choice);
          switch(choice)
          {
               case 1:insertatbeg();break;
               case 2:insertatend();break;
               case 3:insertatpos();break;
               case 4:display();break;
               case 5:deleteatbeg();break;
               case 6:deleteatend();break;
               case 7:deleteatpos();break;
               case 8:exit(0);break;
               default:printf("invalid input");
               
          }
     }
}
