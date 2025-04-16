#include<stdio.h>
int que[100],n,i,rear=-1,front=-1;
int choice;
void main()
{
     printf("enter the range\n");
     scanf("%d",&n);
     while(choice!=-1)
          {
               printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
               printf("enter choice\n");
               scanf("%d",&choice);
               switch(choice)
               {
               case 1 :enq();
               break;
               case 2:deq();
               break;
               case 3:display();
               break;
               case 4:exit(0);
               break;
               default:printf("invalid input\n");
               }
          }
}
void enq()
{
     if((rear+1)%n==front)
     {
          printf("queue is full\n");
     }
     else{
     printf("enter the data\n");
     scanf("%d",&i);
     }
     if(rear==-1 && front==-1)
     {
          rear=0;
          front=0;
          que[rear]=i;
     }
     else{
          rear=(rear+1)%n;
          que[rear]=i;
     }
}
void deq()
{
     if(front==-1)
     {
          printf("queue is empty\n");
     }
     else if(rear=front)
     {
          rear=-1;
          front=-1;
     }
     else
     {
          printf("delete element is %d",que[front]);
          front=(front+1)%n;
     }
}
void display()
{
     if(front==-1&& rear==-1)
     {
          printf("queue is empty\n");
     }
     else
     {
          for(i=front;i!=rear;i=(i+1)%n)
          {
               printf("%d",que[i]);
          }
           printf("%d",que[i]);
     }
}
