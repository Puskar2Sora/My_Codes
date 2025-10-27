//WAP to reverse a no.
#include<stdio.h>
void main()
{
    int n,x,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        s=s*10+x%10;
        x/=10;
    }	
    printf("Reverse of %d is %d",n,s);	
}

