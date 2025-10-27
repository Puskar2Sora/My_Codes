//WAP to print Karpekar no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,s,x,p,sq;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Karpekar No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(x=n,sq=n*n,p=1;x!=0;x/=10)
            p*=10;
        if(sq%p+sq/p == n)
            printf("%d ",n);
    }
}