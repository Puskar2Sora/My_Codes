//WAP to convert second to hour
#include<stdio.h>

int main()
{
    int s,m,h,x;
    printf("Enter the no. of seconds : ");
    scanf("%d",&x);
    h=x/3600;
    s=x%3600;
    m=s/60;
    s%=60;
    printf("%d Seconds = %d Hours %d Minutes %d Seconds",x,h,m,s);
    return 0;
}