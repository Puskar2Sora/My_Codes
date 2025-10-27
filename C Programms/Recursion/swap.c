//WAP to swap two no. using call by reference

#include<stdio.h>
int a,b;
int swap(int*);
void main()
{
    int x,y;
    printf("Enter two no. = ");
    scanf("%d%d",&a,&b);
    printf("Before Swap : \nA = %d & B = %d",a,b);
    x=swap(&a);
    y=swap(&b);
    printf("\nAfter Swap : \nA = %d & B = %d",x,y);
}
int swap(int *p)
{
    if (*p==a)
        return b;
    else
        return a;
}