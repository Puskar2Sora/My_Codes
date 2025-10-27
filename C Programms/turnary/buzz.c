//WAP to check buzz no. using turnery operator
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the no. = ");
    scanf("%d",&x);
    (x%7==0 && x%10==7)?printf("%d is a Buzz no.",x):printf("%d is not a Buzz no.",x);
}