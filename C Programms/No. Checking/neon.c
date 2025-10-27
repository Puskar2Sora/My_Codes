//WAP to check Neon no.
#include<stdio.h>
void main()
{
    int n,sq,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(sq=n*n;sq!=0;sq/=10)
        s+=sq%10;
    (s==n)?printf("%d is a Neon no.",n):printf("%d is not a Neon no.",n);
}