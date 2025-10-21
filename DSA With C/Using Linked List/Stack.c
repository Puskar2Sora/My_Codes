//WAP to implement stack using linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
}N;
N *top=NULL;
void display()
{
    if(top == NULL)
    {
        printf("\nStack Underflow !!!\n");
        return;
    }
    printf("\nStack is : ");
    for(N *temp = top;temp!= NULL;temp = temp->next)
        printf("%d -> %s ",temp->data,(temp->next == NULL)?"NULL":"");
}
void push()
{
    N *temp = (N*)malloc(sizeof(N));//100-->132
    if(temp==NULL)
    {
        printf("Memory can't be allocated");
        return;
    }
    printf("Enter the Value = ");
    scanf("%d",&temp->data);
    temp->next = top;
    top = temp; //100
    printf("\nInsertion successful!!\n");
    display();
}
void pop()
{
    if(top == NULL)
    {
        printf("\nStack Underflow !!!\n");
        return;
    }
    N *temp = top;
    printf("\nDeleted = %d\n",top->data);
    top = top->next;
    free(temp);
    printf("\nDeletion Successful !!!!!\n");
    display();
}
void main()
{
    int c;
    do
    {
        printf("\n\t1 - Push \n\t2 - Pop \n\t3 - Exit \n\nEnter Your Choice : ");
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
                printf("\nWrong Choice !!!!!!!!\n");
        }
   } 
   while(c!=3);
}
