//WAP to check the greater  between two no.
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 1st no. = ");
    scanf("%d",&a);
    printf("Enter 2nd no. = ");
    scanf("%d",&b);
    if (a>b)
        printf("%d is greater",a);
    else if (a==b)
        printf("Both Equal");
    else
        printf("%d is greater",b);
    return 0;
}