//WAP to convert Decimal to Binary
#include<stdio.h>
void main()
{
    int n,x,i=1,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=2,i*=10)
        s+=i*(n%2);
    printf("Decimal of %d is %d",x,s);
}