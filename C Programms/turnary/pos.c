//WAP to check positive no. using turnery operator
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the no. = ");
    scanf("%d",&x);
    (x>0)?printf("%d is a Positive no.",x):(x==0)?printf("%d is a neurtal no. ",x):printf("%d is a Negative no.",x);
}