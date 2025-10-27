//WAP to check the greatest among 3 no.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the 1st no. = ");
    scanf("%d",&a);
    printf("Enter the 2nd no. = ");
    scanf("%d",&b);
    printf("Enter the 3rd no. = ");
    scanf("%d",&c);
    switch ((a==b && b==c)?1:0)
    {
    case 1:
        printf("All no. are equal");
        break;
    case 0:
        if (a>b && a>c)
            printf("1st no. %d is Greatest",a);
        else if (b>c)
            printf("2nd no. %d is Greatest",b);
        else
            printf("3rd no. %d is Greatest",c);
        break;
    default:
        break;
    }
}