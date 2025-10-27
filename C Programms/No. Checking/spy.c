//WAp to check Spy No.
#include<stdio.h>
void main()
{
    int n,x,s=0,p=1;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10)
    {
        s+=n%10;
        p*=n%10;
    }
    (s==p)?printf("%d is a Spy no.",n):printf("%d is ot a Spy no.",n);
}