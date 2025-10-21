//WAP to implement queue using linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}N;
N *f = NULL, *r = NULL;
void display()
{
    if(f==NULL)
    {
        printf("\nQueue Underflow!!!!!\n");
        return;
    }
    printf("\nQueue is : ");
    for(N *temp = f;temp != NULL;temp = temp->next)
        printf("%d -> %s ",temp->data,(temp->next == NULL)?"NULL":"");
}
void enqueue()
{
    N *temp = (N*)malloc(sizeof(N));//100
    if(temp==NULL)
    {
        printf("Memory can't be allocated");
        return;
    }
    printf("Enter the Value : ");//10
    scanf("%d",&temp->data);
    temp->next = NULL;
    if(f==NULL && r==NULL)
        f=temp;//100
    else
        r->next = temp;
    r = temp;
    printf("\nInsertion Successful!!\n");
    display();
}
void dequeue()
{
    if(f==NULL)
    {
        printf("\nQueue Underflow!!!!!\n");
        return;
    }
    N *temp = f;
    printf("\nDeleted : %d\n",f->data);
    f = f->next;
    free(temp);
    printf("\nDeletion Successful!!!\n");
    display();
}
void main()
{
    int c;
    do
    {
        printf("\n\t1 - Enqueue \n\t2 - Dequeue \n\t3 - Exit \n\nEnter Your Choice : ");
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
                exit(0);
            default:
                printf("\nWrong Choice !!!!!!!!\n");
        }
   } 
   while(c!=3);
}