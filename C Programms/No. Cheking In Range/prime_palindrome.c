//WAP to print Prime no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,f=0,i,s,x;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Prime No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(i=2,f=0;i<n;i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        for(x=n,s=0;x!=0;x/=10)
            s=s*10+x%10;
        if(f==0 && s==n)
            printf("%d ",n);
    }
}