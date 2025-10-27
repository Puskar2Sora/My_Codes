//WAP to check pronic no.
#include<stdio.h>
void main()
{
    int n,i,f=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for (i=1;i<=n/2;i++)
    {
        if (i*(i+1)==n)
        {
            f=1;
            break;
        }
    }
    (f==1)?printf("%d is a Pronic No.",n):printf("%d is not a Pronic No.",n);
}