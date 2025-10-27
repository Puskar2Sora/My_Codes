//WAP to check Happy no.
#include<stdio.h>
int sq_sum(int n)
{
    int s=0;
    for(;n!=0;n/=10)
        s+=(n%10)*(n%10);
    return s;
}
void main()
{
    int n,s;
    printf("Enter the no. = ");
    scanf("%d",&n);
    s=sq_sum(n);
    while(1)
    {
        s=sq_sum(s);
        if (s<10)
        {
            (s==1)?printf("%d is a Happy no.",n):printf("%d is not a Happy no.",n);
            break;
        }  
    }
}