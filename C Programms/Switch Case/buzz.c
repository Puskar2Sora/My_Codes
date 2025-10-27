//WAP to check Buzz No.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. = ");
    scanf("%d",&n);
    switch ((n%7==0 && n%10==7)?1:0)
    {
    case 1:
        printf("%d is a Buzz No.",n);
        break;
    case 0:
        printf("%d is not a Buzz No.",n);
        break;
    default:
        break;
    }
}