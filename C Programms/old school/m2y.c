//WAP to convert month to year
#include<stdio.h>

int main()
{
    int m,x,y;
    printf("Enter the no. of months : ");
    scanf("%d",&x);
    y=x/12;
    m=x%12;
    printf("%d Months = %d Years %d Months",x,y,m);
    return 0;
}