//WAP to check whether a no. is even or odd
#include<stdio.h>

void main()
{
    int x;
    printf("Enter the no. = ");
    scanf("%d",&x);
    if (x==0)
        printf("%d is a neutral no.",x);
    else if (x%2==0)
        printf("%d is a even no.",x);
    else
        printf("%d is a odd no.",x);
}