//WAP to check positive no.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. = ");
    scanf("%d",&n);
    switch ((n>0)?1:0)
    {
    case 1:
        printf("%d is a positive no.",n);
        break;
    case 0:
        if (n==0)
            printf("%d is a neutral no.",n);
        else
            printf("%d is a negative no.",n);
        break;    
    default:
        break;
    }
}