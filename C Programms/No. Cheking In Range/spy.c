//WAP to print Spy no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,s,x,p;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Spy No. from 1 to %d are ...\n",r);
    for(n=10;n<=r;n++)
    {
        for(s=0,p=1,x=n;x!=0;x/=10)
        {
            s+=x%10;
            p*=x%10;
        }
        if (s==p)
            printf("%d ",n);
    }
}

