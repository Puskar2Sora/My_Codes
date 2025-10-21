#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 3
void push();
void pop();
void display();
int stack[SIZE],top=-1;
int c;
void main()
{
   while(1)
   {
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&c);
      switch(c)
      {
        case 1: 
            push();
            break;
        case 2: 
            pop();
            break;
        case 3: 
            exit(0);
        default:
            printf("\nWrong selection!!! Try again!!!");
      
      }
   }
   getch();
}
void push()
{
   if(top == SIZE-1)
   {
      printf("\nStack is Full!!! Insertion is not possible!!!");
      return;               
   }
   else
   {
      printf("Enter the No. = ");
      scanf("%d",&stack[++top]);
      printf("\nInsertion success!!!");
      display();
   }

}
void pop()
{
   if(top == -1)
   {
      printf("\nStack is Empty!!! Deletion is not possible!!!");
      return;
   }
   else
   {
      printf("\nDeleted : %d\n", stack[top]);
      top--;
      display();
   }
}
void display()
{
   int i;
   if (top == - 1)
   {
      printf("Stack is empty \n");
      return;
   }
   else
   {
      printf("Stack is : \n");
      for (i = 0; i <= top; i++)
         printf("%d ", stack[i]);
      printf("\n");
   }
}