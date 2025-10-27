//WAP to convert Decimal to Binary
#include<stdio.h>
void main()
{
    int n,x,i=1,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=8,i*=10)
        s+=i*(n%8);
    printf("Decimal of %d is %d",x,s);
}