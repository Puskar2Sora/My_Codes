//WAP to check prime no.
#include<stdio.h>
void main()
{
    int n,i,f=1;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    (f==1)?printf("%d is a Prime no.",n):printf("%d is not a Prime no.",n);
}