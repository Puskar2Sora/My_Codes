//DEQUEUE(Double ended queue)
#include<stdio.h>
#define MAX 5
void display();
int dq[MAX],l = -1, rt = -1;
void insert_right()
{
    if((l == 0 && rt == MAX-1) || (l == rt+1))
    {	
        printf("Queue Overflow\n");
        return;
    }
    if (l == -1)  /* if queue is initially empty */
    	l = rt = 0;
    else 
        if(rt++ == MAX-1)  /*right is at last position of queue */
            rt = 0;
    printf("Input the element : ");
    scanf("%d", &dq[rt]);
    display();
}
void insert_left()
{	
    if((l == 0 && rt == MAX-1) || (l == rt+1))
    {	
        printf("Queue Overflow \n");
        return;	 
    }
    if (l == -1)//If queue is initially empty/
    	l = rt = 0;
    else
        if(l-- == 0)
            l=MAX-1;
    printf("Input the element : ");
    scanf("%d", &dq[l]);	 
    display();
}
void delete_left()
{	
    if (l == -1)
    {	
        printf("Queue Underflow\n");
        return ;	
    }
    printf("Deleted Element : %d\n",dq[l]);
    if(l == rt) /*Queue has only one element */
        l = rt = -1;
    else
        if(l++ == MAX-1)
            l = 0;
    display();
}
void delete_right()
{
    if (l == -1)
    {
        printf("Queue Underflow\n");
        return ;	 
    }
    printf("Deleted Element : %d\n",dq[rt]);
    if(l == rt) //queue has only one element/
    	l = rt = -1;
    else
        if(rt-- == 0)
            rt=MAX-1;	
    display();
}
void display()
{	
    int f = l,r = rt;
    if(l == -1)
    {	
        printf("Queue is empty\n");
        return;	 
    }
    printf("Queue elements :\n");
    if( f <= r )
        while(f <= r)
        	printf("%d ",dq[f++]);	
    else
    {
        while(f <= MAX-1)
            printf("%d ",dq[f++]);
        for(f = 0;f <= r;)
            printf("%d ",dq[f++]);
    }
    printf("\n");
}
void main()
{	
    int c;
    do
    {	
        printf("1.Insert at right\n2.Insert at left\n3.Delete from left\n4.Delete from right\n5.Quit\nEnter your choice : ");
        scanf("%d",&c);
        switch(c)
        {	
            case 1:
                insert_right();
                break;
            case 2:
                insert_left();
                break;
            case 3:
                delete_left();
                break;
            case 4:
                delete_right();
                break;
            case 5:
                break;
            default:
                printf("Wrong choice\n");
        }
    }
    while(c!=5);
}