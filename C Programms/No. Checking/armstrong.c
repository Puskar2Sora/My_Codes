//WAP to check Armstong no.
#include<stdio.h>
void main()
{
    int n,p,i,s=0,c=0,x;
    printf("Enter the no. = ");
    scanf(" %d",&n);
    for(x=n;n!=0;n/=10)
        c++;
    for(n=x;n!=0;n/=10)
    {
        p=1;
        for(i=1;i<=c;i++)
            p=p*(n%10);
        s+=p;
    }
    (s==x)?printf("%d is an Armstrong No.",x):printf("%d is not an Armstrong No.",x);
}