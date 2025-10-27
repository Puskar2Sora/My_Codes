//WAP to calc. the sum of digit
#include<stdio.h>
void main()
{
    int n,x,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10)
    {
        s+=n%10;
    }
    printf("Sum of the digits of %d is %d",x,s);
}