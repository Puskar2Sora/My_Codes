//WAP to check Disarium no.
#include<stdio.h>
void main()
{
    int n,p,i,s=0,c=0,x;
    printf("Enter the no. = ");
    scanf(" %d",&n);
    for(x=n;n!=0;n/=10)
        c++;
    for(n=x;n!=0;n/=10,c--)
    {
        p=1;
        for(i=1;i<=c;i++)
            p=p*(n%10);
        s+=p;
    }
    (s==x)?printf("%d is an Disarium No.",x):printf("%d is not an Disarium No.",x);
}