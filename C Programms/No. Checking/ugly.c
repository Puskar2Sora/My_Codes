//WAP to check Ugly no.
#include<stdio.h>
void main()
{
    int n,f=0,x;
    printf("Enter the no. = ");
    scanf("%d",&n);
    x=n;
    while(n>1)
    {
        (n%2==0)?n/=2:(n%3==0)?n/=3:(n%5==0)?n/=5:f++;
        if(f!=0)
            break;
    }
    (f==0)?printf("%d is Ugly no.",x):printf("%d is not an Ugly no.",x);
}