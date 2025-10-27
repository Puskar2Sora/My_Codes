//WAP to calc. the interest
#include<stdio.h>

void main()
{
    int b;
    printf("Enter the Account Balance : ");
    scanf("%d",&b);
    if (b>8000)
        printf("Interest = %d",b*8/100);
    else if (b>3000)
        printf("Interest = %d",b*5/100);
    else
        printf("Interest = %d",b*2/100);
}