//WAP to print Twin Prime no. for 1-n
#include<stdio.h>
int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    int r,n,x,s;
    printf("Enter The range : ");
    scanf("%d",&r);
    printf("Twin-Prime no. in range of 1 - %d are ...\n",r);
    for(n=2;n<=r;n++)
    {
        for(x=n,s=0;x!=0;x/=10)
            s=s*10+x%10;
        if ((is_prime(n)==1) && (is_prime(s)==1))
            printf("%d ",n);
    }
}