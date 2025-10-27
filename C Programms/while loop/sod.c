//WAP to print the sum of digit of a no.
#include<stdio.h>
void main()
{
    int n,s=0,x;
    printf("Enter the no. = ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        s+=x%10;
        x/=10;
    }	
    printf("Sum of digit of %d is %d",n,s);
}

