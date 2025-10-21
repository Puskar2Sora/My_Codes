// wap to implement a single linked list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head; 
int c = 0;
void traverse()
{
    struct Node *p = head;
    for (;p != NULL;p = p->next)
        printf("Value = %d & Address = %u\n", p->data, p);
    printf("\nTotal Nodes = %d\n", c);
}
void createlist(int x)//n=3
{
    struct Node *n,*temp;
    for(int i=1;i<=x;i++,c++)//i=2;4<=3;i++
    {
        n=(struct Node*)malloc(sizeof(struct Node));//100-->132
        if(n == NULL)
        {
            printf("\nMemory can't be allocated\n");
            return;
        }
        if(i == 1)
            temp = head = n;
        printf("Enter the data : ");
        scanf("%d",&n->data); 
        temp->next = n;    
        n->next = NULL;                   
        temp = n;                               
    }
    traverse();
}
void insertatbeg()
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the No. = ");
    scanf("%d", &n->data);
    n->next = head;
    head = n;
    c++;
    traverse();
}
void insertatend()
{
    struct Node *end = head, *p;
    while (end->next != NULL)
        end = end->next;
    p = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the No. = ");
    scanf("%d", &p->data);
    p->next = NULL;
    end->next = p;
    c++;
    traverse();
}
void insertatspecific()
{
    int i, p;
    printf("Enter the Position = ");
    scanf("%d", &p);
    if (p == 1)
        insertatbeg();
    else if (p == c + 1)
        insertatend();
    else if (p > c+1)
    {
        printf("Insertion Can't be Possible\n");
        return;
    }
    struct Node *temp = head, *n;
    for (i = 1; i < p-1; i++)
        temp = temp->next;
    n = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the No.= ");
    scanf("%d", &n->data);
    n->next = temp->next;
    temp->next = n;
    c++;
    traverse();

}
void deleteatbeg()
{
    struct Node *p = head;
    if (p == NULL)
    {
        printf("Linked List is empty!!! deletion can't be possible\n");
        return;
    }
    printf("\nDeleted = %d Address = %u\n\n", p->data, p);
    head = head->next;
    free(p);
    c--;
    traverse();

}
void deleteatspecific()
{
    if (head == NULL)
    {
        printf("Linked List is empty!!! deletion can't be possible\n");
        return;
    }
    int i, n;
    struct Node *p = head, *q;
    printf("Enter the Position u wanna delete = ");
    scanf("%d", &n);
    if (n > c)
    {
        printf("Deletion Can't be Possible\n");
        return;
    }
    for (i = 1; i < n; i++,p = p->next)
        q = p;
    q->next = p->next;
    printf("\nDeleted = %d Address = %u\n\n", p->data, p);
    free(p);
    c--;
    traverse();

}
void deleteatend()
{
    if (head == NULL)
    {
        printf("L.L. is empty!!! deletion can't be possible\n");
        return;
    }
    struct Node *p = head,*q;
    for (;p->next != NULL;p = p->next)
        q = p;
    printf("\nDeleted = %d Address = %u\n\n", p->data, p);
    free(p);
    q->next = NULL;
    c--;
    traverse();
}
void main()
{
    while (1) // for(;;)
    {
        printf("\n*MENU*\n1. Create list\n2. Delete at begining\n3. Delete at end\n4. Delete at any\n5. insert at begining\n6. insert at end\n7. insert at any\n8. Exit\n\nEnter your choice : ");
        int ch, n;
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("Enter the No. of nodes = ");
                scanf("%d", &n);
                createlist(n); // calling
                break;
            case 2:
                deleteatbeg(); // calling
                break;
            case 3:
                deleteatend(); // calling
                break;
            case 4:
                deleteatspecific(); // calling
                break;
            case 5:
                insertatbeg(); // calling
                break;
            case 6:
                insertatend(); // calling
                break;
            case 7:
                insertatspecific(); // calling
                break;
            case 8: 
                exit(0);
            default:
                printf("Wrong choice..!!");
        }
    }
}