//WAP to convert day to month
#include<stdio.h>

int main()
{
    int d,m,d1;
    printf("Enter the no. of day : ");
    scanf("%d",&d);
    m=d/30;
    d1=d%30;
    printf("%d Days = %d Month %d Days",d,m,d1);
    return 0;
}