//WAP to check even no. using turnery operator
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the no. = ");
    scanf("%d",&x);
    (x==0)?printf("%d is a nutral no.",x):(x%2==0)?printf("%d is Even no.",x):printf("%d is Odd no.",x);
}