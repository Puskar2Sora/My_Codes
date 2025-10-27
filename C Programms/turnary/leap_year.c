//WAP to check leap year using turnary
#include<stdio.h>

void main()
{
    int y;
    printf("Enter the Year  = ");
    scanf("%d",&y);
    (y%400==0)?printf("%d is a leap year",y):(y%100==0)?printf("%d is not a leap year",y):(y%4==0)?printf("%d is a leap year",y):printf("%d is not a leap year",y);
}