/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdio.h>
void insert();
void display();
void delete();
int choice;
struct node
{
    int data;
    struct node *next;
}*new,*header,*temp,*temp1,*temp2;
void main()
{
    while(1)
    {
        printf("\n1.insert\n2.display\n3.delete\n4.exit");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:insert();
                break;
        case 2:display();
                break;
        case 3:delete();
                break;
        case 4:exit(0);
                break;
        }
    }
}
void insert()
{
    new=malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&new->data);
    if(header==NULL)
    {
        new->next=NULL;
        header=new;
    }
    new->next=header;
    header=new;
}
void display()
{
    if(header==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        for(temp=header;temp->next!=NULL;temp=temp->next)
        {
            printf("%d",temp->data);
        }
        printf("\t");
    }
}
void delete()
{
    temp=temp1=header;
    int pos,i;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
        temp1=temp->next;
        temp2=temp1->next;
        temp1=temp2->next;
        free(temp2);
    }
}