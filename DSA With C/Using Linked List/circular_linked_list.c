//circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;       
}*head;
int c;
void create(int);
void display();
void deleteatbeg();
void deleteatend();
void deleteatany(int);
void insertatbeg();
void insertatend();
void insertatany();
void search();
void main()
{
    int n,ch,data;
    while(1)
    {
        printf("\n*MENU*\n1. Create list\n2. Delete at begining\n3. Delete at end\n4. Delete at any\n5. insert at begining\n6. insert at end\n7. insert at any\n8. search\n9. Exit\n\nEnter your choice : ");
        scanf("%d",&ch);//1 2
        switch(ch)
        {
            case 1 :
                printf("Enter the number of nodes : ");
                scanf("%d",&n);//n=3
                create(n);//calling 
                break;
            case 2 :
                deleteatbeg();
                break;
            case 3 :
                deleteatend();
                break; 
            case 4 :                    
                deleteatany(c);
                break;
            case 5 :
                insertatbeg();
                break;
            case 6 :
                insertatend();
                break; 
            case 7 : 
                insertatany();   //5                 
                break; 
            case 8 : 
                search();                     
                break;      
            case 9 :
                exit(0);
            default :
                printf("\nWrong choice!!!\n");                     
        }
    }
}
void create(int x)//n=3
{
    struct node *n,*temp;
    for(int i=1;i<=x;i++)//i=2;4<=3;i++
    {
        n=(struct node*)malloc(sizeof(struct node));//100-->132
        if(n == NULL)
        {
            printf("\nMemory can't be allocated\n");
            return;
        }
        if(i == 1)
            temp = head = n;
        printf("Enter the data : ");
        scanf("%d",&n->data);     
        n->next = head;           
        temp->next = n;           
        temp = n;                               
    }
    display();
}
void display()
{
    c=0;
    struct node *temp1=head;//*temp1=100
    if(head==NULL)//100==NULL
    { 
        printf("List is empty\n");
        return;
    }
    printf("\nData in the list : \n\n");           
    do
    {
        c++;//c=3                
        printf("Data = %d and Address = %u\n",temp1->data,temp1);
        temp1=temp1->next;//temp1=100                 
    }
    while(temp1!=head);//circular  100!=100  
    printf("\nThe number of nodes are : %d\n",c);       //3
}
void deleteatbeg()
{
    struct node *end=head;
    if(end->next==end)
    {
        head=NULL;
        free(end);
    }
    else
    {
        while(end->next!=head)
            end = end->next;
        head = head->next;
        free(end->next);
        end->next = head;     
    }
    printf("\nDeletion Successful...\n");
    display();
}
void deleteatend()
{
    struct node *end = head;
    if(end->next == end)
    {
        head = NULL;
        free(end);
    }
    else
    {
        while((end->next)->next!=head)       
            end=end->next;
        free(end->next);
        end->next = head; 
    }   
    printf("\nDeletion Successful...\n");
    display();
}
void deleteatany(int n) 
{
    struct node *end ;
    end = head;
    int p, i;
    printf("\nEnter the position : ");
    scanf("%d", &p);
    if (p < 1 || p > n) 
    {
        printf("Invalid position!!\n");
        return;
    }
    else if (p == 1) // Delete at beginning
        deleteatbeg();
    else if (p == n) // Delete at end
        deleteatend();
    struct node *prev = NULL;
    for (i = 1; i < p; i++,end = end->next) 
        prev = end;
    prev->next = end->next;
    free(end);
    printf("\nDeletion Successful...\n");
    display();
}
void insertatbeg()
{
    struct node *n,*end=head;//end=100    
    do
        end=end->next;//end=132                 
    while(end->next!=head);//100!=100   
    n = (struct node*)malloc(sizeof(struct node)); 
    printf("Enter the data : ");
    scanf("%d",&n->data);//x=40
    n->next=head;
    head = end->next=n;//132->next=head=148
    display();
}
void insertatend()
{
    struct node *n,*end=head;//end=148
    do
        end=end->next;//end=132          
    while(end->next!=head);//148!=148   
    n = (struct node*)malloc(sizeof(struct node)); 
    printf("Enter the data : ");
    scanf("%d",&n->data);
    n->next=head;
    end->next=n;//132->next= 164
    display();
}
void insertatany()//s=5
{
    struct node *n3,*t=head;
    int i,p;
    printf("Enter the position :");
    scanf("%d",&p);//n=3
    if(p==1)
        insertatbeg();
    else if(p==c+1)
        insertatend();
    else if(p>c+1) 
        return;
    for(i=2;i<p;i++)//i=1;1<=3;i++              
        t=t->next;//t=100                 
    n3=(struct node*)malloc(sizeof(struct node));
    printf("Enter your data : ");
    scanf("%d",&n3->data);
    n3->next=t->next;
    t->next=n3;
    display();  
}
void search()
{
    int x,f=0;
    struct node *temp2 = head ;
    printf("\nEnter the no. to search : ");
    scanf("%d",&x);
    if(head==NULL)
    {
        printf("Unable to find!!! No node in the linked list.");
        return;
    }
    do
    {
        if(temp2->data == x)
        {
            f=1;
            break;
        }
        temp2=temp2->next;
    }
    while(temp2!=head);		
    (f!=1)?printf("\nSearch not found !!\n"):printf("\nSearch found..\n");
}