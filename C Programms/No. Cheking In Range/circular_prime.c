//WAP to check Circular Prime No.
#include<stdio.h>
int is_prime(int n)
{
    for (int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    int n,x,i,f,p,c,r;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Circular Prime no. from 1 to %d are ...\n",r);
    for(n=2;n<=r;n++)
    {
        for(x=n,p=1,c=0;x!=0;x/=10,c++)
            p*=10;
        for(i=1,f=0,p/=10,x=n;i<=c;i++,x=(x%p)*10+x/p)
        {
            if (is_prime(x)!=1)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("%d ",n);
    }
}