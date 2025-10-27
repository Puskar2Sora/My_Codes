//WAP to check the greater between 2 no.
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the 1st no. = ");
    scanf("%d",&a);
    printf("Enter the 2nd no. = ");
    scanf("%d",&b);
    if (a==b)
        printf("Both are equal");
    else
    {
        switch ((a>b)?1:0)
        {
        case 1:
            printf("1st no. %d is Greater",a);
            break;
        case 0:
            printf("2nd no. %d is Greater",b);
            break;
        default:
            break;
        }
    }
}