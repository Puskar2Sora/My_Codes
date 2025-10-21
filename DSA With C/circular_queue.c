#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3
int cqueue_arr[MAX];
int front=-1,rear=-1,n;
void insert();
void del();
void display();
int main()
{
  int choice;
  do
  {
     printf("1.Insert\n");
     printf("2.Delete\n");
     printf("3.Quit\n");
     printf("Enter your choice : ");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1 :
            insert();
            break;
       case 2 :
            del();
            break;
       case 3:
           exit(0);
       default:
            printf("Wrong choice\n");
     }
   }while(choice!=4);
  getch();
  return 0;
}
void insert()
{
   if((front == 0 && rear == MAX-1) || (front == rear+1))
   {
      printf("Queue Overflow \n");
      return;
   }
   if (front == -1)  /*If queue is empty */
   {
     front = 0;
     rear = 0;
   }
   else
   {
     if(rear == MAX-1)	/*rear is at last position of queue */
       rear = 0;
     else
       rear = rear+1;//2
   }
   printf("Enter the No. = ");
   scanf("%d",&cqueue_arr[rear]);
   display();
}
void del()
{
  if (front == -1)
  {
    printf("Queue Underflow\n");
    return ;
  }
  printf("Deleted : %d\n",cqueue_arr[front]);
  if(front == rear) /* queue has only one element */ //circular
  {
    front = -1;
    rear=-1;
  }
  else
  {	
    if(front == MAX-1)//circular queue
      front = 0;//circular queue
    else
      front = front+1;//2
  }
  display();
}
void display()//func. definition
{
    if (front == - 1)
    {
        printf("Queue is empty \n");
        return;
    }
    else
    {   
        int i=front;
        printf("Queue is : \n");
        while(1)
        {
              printf("%d ",cqueue_arr[i]);
            if(i==rear)
              break;
            i=(i+1)%MAX;
        }
        printf("\n");
    }
}