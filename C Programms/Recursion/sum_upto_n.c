//WAP to print the sum of 1-n no. using recursion
#include<stdio.h>
int sum(int);
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    printf("\nSum of the series = %d",sum(n));
}
int sum(int n)
{
    static int i=1;
    printf("%d ",i);
    if (i>=n)
        return n;
    else 
        return i++ + sum(n);
}