//WAP to check Autopolymorphic No.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. = ");
    scanf("%d",&n);
    switch (((n*n)%10==n || (n*n)%100==n)?1:0)
    {
    case 1:
        printf("%d is an Autopolymorphic No.",n);
        break;
    case 0:
        printf("%d is not an Autopolymorphic No.",n);
        break;
    default:
        break;
    }  
}