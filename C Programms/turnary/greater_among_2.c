//WAP to check the greater between two no.
#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter the 1st no. : ");
    scanf("%d",&a);
    printf("Enter the 2nd No. : ");
    scanf("%d",&b);
    (a>b)?printf("1st no. %d is greater",a):(a==b)?printf("Both Equal"):printf("2nd no. %d is greater",b);
}