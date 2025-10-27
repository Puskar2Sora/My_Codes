//WAP to check Abundant No.
#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for (i=1;i<=n/2;i++)
    {
        if(n%i==0)
            s+=i;
    }
    (s>n)?printf("%d is an Abundant No.",n):printf("%d is not an Abundant No.",n);
}