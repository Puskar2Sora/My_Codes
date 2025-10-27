//WAP to reverse a no.
#include<stdio.h>
void main()
{
    int x,n,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10)
        s=s*10+n%10;
    printf("Reverse of %d is %d",x,s);
}