//WAP to check Karpekar no.
#include<stdio.h>
void main()
{
    int n,sq,p=1,s,x;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(sq=n*n,x=n;n!=0;n/=10)
        p*=10;
    s=sq%p + sq/p;
    (s==x)?printf("%d is a Karpekar No.",x):printf("%d is not a Karpekar No.",x);
}