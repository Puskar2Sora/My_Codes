//double linked list - edited 
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
}N;
N *head,*temp,*newNode;
int i,x,co=0;
void display()
{
    N *p = head;
    printf("\nList = \n");
    for(;p->next!=NULL;p=p->next)
        printf("Value = %d Address = %u\n",p->data,p);
    printf("Value = %d Address = %u\n",p->data,p);
    printf("reverse list=\n");
    for(;p!=NULL;p=p->prev)
        printf("Value = %d Address = %u\n",p->data,p);
    printf("\nTotal nodes= %d ",co);
}
void createList(int n)
{
    for(int i=1;i<=n;i++,co++)
    {
        newNode=(N*)malloc(sizeof(N));
        if (i == 1)
        {
            temp = head = newNode;
            newNode->prev=NULL;
        }
        else
            newNode->prev=temp;
        printf("Enter the No.= ");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        temp->next=newNode; 
        temp=newNode; 
    }
    display();
}
void insertatbeg()
{
    newNode=(N*)malloc(sizeof(N));
    printf("Enter the data: ");
    scanf("%d",&newNode->data);
    newNode->prev=NULL;
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    co++;
    display();
}
void insertatend()
{
    newNode=(N*)malloc(sizeof(N));
    printf("Enter the data : ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    N *p = head;
    while(p->next!=NULL)
        p=p->next;
    newNode->prev=p;
    p->next=newNode;
    co++;
    display();
}
void insertatspecific()
{
    int pos;
    N *p = head;
    printf("Enter the position to insert the data: ");
    scanf("%d",&pos);
    if(pos==1)
        insertatbeg();
    else if(pos==co+1)
        insertatend();
    else if(pos>co+1 || pos<=0)
        return;
    else
    {
        for(i=1;i<pos;i++)
            p=p->next;
        newNode=(N*)malloc(sizeof(N));
        printf("Enter the data: ");
        scanf("%d",&newNode->data);
        newNode->prev = p ->prev;
        newNode -> next = p;
        (p->prev)->next = newNode;
        p -> prev = newNode;
        co++;
        display();
    }
}
void delatbeg()
{
    printf("Deleted Element = %d Address = %u\n",head->data,head);
    head=head->next;
    free(head -> prev);
    head->prev=NULL;
    --co;
    display();
}
void delatend()
{
    N *tmp = head;
    while(tmp->next!=NULL)
        tmp=tmp->next;
    printf("Deleted Element = %d Address = %u\n",tmp->data,tmp);
    tmp->prev->next=NULL;
    free(tmp);
    --co;
    display();
}
void delatspecific()
{
    int i,pos;
    printf("\nEnter the Position =");
    scanf("%d",&pos);
    if(pos==1)
        delatbeg();
    else if(pos==co)
        delatend();
    else if(pos>co || pos<=0)
        return;
    else
    {    
        N *p=head;
        for(i=1;i<pos;i++)
            p = p->next;
        printf("Deleted element = %d address = %u\n",p->data,p);
        (p->prev)->next = p -> next;
        (p->next)->prev = p -> prev;
        free(p);
        --co;
        display();
    }
}
void main()
{
    while(1)//for(;;)
    {
        printf("\n1 -> Create\n2 -> Insert at Begining\n3 -> Insert at End\n4 -> Insert at Specific\n5 -> Delete at Beginning\n6 -> Delete at End\n7 -> Delete at Specific\n8 -> Exit\nEnter Your Choice : ");
        int ch,n;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the Range = ");
                scanf("%d",&n);
                createList(n);//calling
                break;
            case 2:
                insertatbeg();//calling
                break;
            case 3:
                insertatend();//calling
                break;
            case 4:
                insertatspecific();//calling
                break;
            case 5:
                delatbeg() ;//calling
                break;
            case 6:
                delatend() ;//calling
                break;
            case 7:
                delatspecific()  ;//calling
                break;
            case 8:
                exit(0);
            default:
                printf("\nWrong Choice!!!!!\n");
        }
    }
}