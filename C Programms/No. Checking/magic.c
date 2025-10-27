//WAP to check Magic no.
#include<stdio.h>
int dig_sum(int n)
{
    int s=0;
    for(;n!=0;n/=10)
        s+=(n%10);
    return s;
}
void main()
{
    int n,s;
    printf("Enter the no. = ");
    scanf("%d",&n);
    s=dig_sum(n);
    while(1)
    {
        s=dig_sum(s);
        if (s<10)
        {
            (s==1)?printf("%d is a Magic no.",n):printf("%d is not a Magic no.",n);
            break;
        }  
    }
}