//WAP to check Even no. 
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. = ");
    scanf("%d",&n);
    switch ((n==0)?1:0)
    {
    case 1:
        printf("%d is a Neutral no.",n);
        break;
    case 0:
        if (n%2==0)
            printf("%d is an Even no.",n);
        else
            printf("%d is an Odd no.",n);
            break;
    default:
        break;
    }
}