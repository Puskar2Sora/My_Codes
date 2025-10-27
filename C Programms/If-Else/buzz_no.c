//WAP to check Buzz No.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no. = ");
    scanf("%d",&n); 
    if (n%10 == 7 && n%7 == 0)
        printf("%d is a Buzz no.",n);
    else
        printf("%d is not a Buzz no.",n);
    return 0;
}