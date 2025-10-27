//WAP to check autopolymorphic no. using turnery operator
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the no. = ");
    scanf("%d",&x);
    ((x*x)%10==x || (x*x)%100==x)?printf("%d is an Autopolymorphic No.",x):printf("%d is not an Autopolymorphic No.",x);
}