#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 3
void enqueue();
void dequeue();
void display();
int c;
int rear=-1,front=-1,queue[SIZE];
int main()
{
 for(;;)
 {
  printf("******MENU******");
  printf("\n 1.For Enqueue\n 2.For Dequeue\n 3.For exit\n\n");
  printf("Enter the choice=");
  scanf("%d",&c);
  switch(c)
  {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
      break;
    case 3:
      exit(1);
    default:
      printf("VAAIIIII!!!!! VALOIII BOLLL VUL VAL CHOICE DICHISSS.....\n TOR E TO SOMOY!!!!\n");
  };
 }
  getch();
}
void enqueue()
{
  if (rear==SIZE-1)
  {
      printf("QUEUE Over flow!!!!!!!!!!!!!!!!\n");
      return; 
  }
  else
  {
    if(front==-1)
       front=0;
    printf("ENter the Element Youn want to insert=");
    scanf("%d",&queue[++rear]); 
  }
  display();
}
void display()
{
  if (front==-1 || front>rear)
    {
        printf("Queue  underflow..... Mne vaiii queue faka ... kichu dekha r neii...\n");
        return;
    }
  else
  {
    int i;
    for(i=front;i<=rear;i++)
    {
      printf("%d\n",queue[i]);
    }
    printf("\n");
  }
}
void dequeue()
{
  if(front==-1)
  {
    printf("Queue Underflow!!!!!!\n");
    return;
  }
  else
  {
    printf("Deleted %d \n",queue[front]);
    front+=1;
  }
  display();
}