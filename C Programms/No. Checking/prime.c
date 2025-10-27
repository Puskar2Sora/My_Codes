

//WAP to check prime no.
#include<stdio.h>
void main()
{
    int n,i,f=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    (f==0)?printf("%d is a Prime no.",n):printf("%d is not a Prime no.",n);
}