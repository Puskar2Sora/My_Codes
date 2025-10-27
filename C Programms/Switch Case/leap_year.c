//WAP to check Leap Year
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of Year = ");
    scanf("%d",&n);
    switch ((n%400==0)?1:0)
    {
    case 1:
        printf("%d is a leap year",n);
        break;
    case 0:
        if (n%4==0 && n%100!=0)
            printf("%d is a leap year",n);
        else
            printf("%d is not a leap year",n);
        break;
    default:
        break;
    }
}