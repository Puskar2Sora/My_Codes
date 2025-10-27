//WAP to print Tech no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,s,x,c,p,i;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Tech No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(c=0,x=n;x!=0;x/=10)
            c++;
        if(c%2==0)
        {
            for(p=1,x=n,i=1;i<=c/2;i++)
                p*=10;
            s=x%p+x/p;
            if(s*s==n)
                printf("%d ",n);
        }
    }
}

