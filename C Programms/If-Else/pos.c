//WAP to check whether a no. is positive or negative
#include<stdio.h>

void main()
{
    int x;
    printf("Enter the no. = ");
    scanf("%d",&x);
    if (x>0)
        printf("%d is a positive no.",x);
    else if(x==0)
        printf("%d is a neutral no.",x);
    else
        printf("%d is a negative no.",x);
}