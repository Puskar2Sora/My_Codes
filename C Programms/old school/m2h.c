//WAP to convert minute to hour
#include<stdio.h>

int main()
{
    int m,h,x;
    printf("Enter the no. of Minutes : ");
    scanf("%d",&x);
    h=x/60;
    m=x%60;
    printf("%d  Minutes = %d Hours %d Minutes",x,h,m);
    return 0;
}