

//WAP to check whether a year is leap year or not
#include<stdio.h>
void main()
{
    int y;
    printf("Enter the year : ");
    scanf("%d",&y);
    if (y%400 == 0)
        printf("%d is Leap Year",y);
    else if (y%100 == 0)
        printf("%d is not a Leap Year",y);
    else if (y%4 == 0)
        printf("%d is Leap Year",y);
    else
        printf("%d is not Leap Year",y);
}