//WAP to calculate the factorial of a no. using recursion
#include<stdio.h>
int fact(int);

void main()
{
    int n;
    printf("Enter the no. = ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}
int fact(int n)
{
    if (n==0 || n==1)
        return 1;
    else
        return n* fact(n-1);
}