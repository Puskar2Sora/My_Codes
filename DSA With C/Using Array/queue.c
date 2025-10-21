//WAP to implement queue using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 3//array size will be fixed for 3 no.
int queue[MAX],r = - 1,f = - 1;
void enqueue();//func. declaration--> enqueue
void dequeue();//func. declaration--> dequeue
void display();//func. declaration
void main()
{
    int c;
    while (1)
    {
        printf("1.Insert element to queue \n2.Delete element from queue \n3.Quit \nEnter your choice : ");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
                enqueue();//func. calling
                break;
            case 2:
                dequeue();//calling
                break;
            default:
                exit(1);
        }
    }   
} 
void enqueue()//func. definition
{
    if (r == MAX - 1)
    {
        printf("Queue Overflow \n");
        return;
    }
    if (f == - 1)
        f = 0;
    printf("Insert the element in queue : ");
    scanf("%d",&queue[++r]);
    display();
}
void dequeue()//func. definition
{
    if (f == - 1 || f > r)
    {
        printf("Queue Underflow \n");
        return ;
    }
    printf("Deleted : %d\n", queue[f++]);
    display();
}
void display()//func. definition
{
    if (f == - 1 || f>r)
    {
        printf("Queue is empty \n");
        return;
    }
    printf("Queue is : \n");
    for (int i = f; i <= r; i++)
        printf("%d ", queue[i]);
    printf("\n");
}