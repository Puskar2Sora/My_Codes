//WAP to check Tech no.
#include<stdio.h>
void main()
{
    int n,s=0,x,c=0,i,p=1;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10)
        c++;
    if (c%2==0)
    {
        c=c/2;
        for(i=1;i<=c;i++)
            p*=10;
        s=x/p+x%p;
        (s*s == x)?printf("%d is a Tech no.",x):printf("%d is not a Tech no.",x);
    }
    else
        printf("%d is not a Tech no.",x);
}