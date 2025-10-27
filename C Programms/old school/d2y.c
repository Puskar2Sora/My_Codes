//WAP to convert day to year
#include<stdio.h>

int main()
{
    int d,m,y,d1;
    printf("Enter the no. of day : ");
    scanf("%d",&d);
    y=d/365;
    d1=d%30;
    m=d1/30;
    d1%=30;
    printf("%d Days = %d years %d Month %d Days",d,y,m,d1);
    return 0;
}