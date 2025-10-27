//WAP to print the factorial of a no.
#include<stdio.h>
void main()
{
    int n,i=1,f=1;
    printf("Enter the no. = ");
    scanf("%d",&n);
    while(i<=n)
        f*=i++;
    printf("Factorial of %d is %d ",n,f);
}
