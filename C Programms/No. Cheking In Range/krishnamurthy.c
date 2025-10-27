//WAP to print Krishnamurthy no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,s,x,f,i;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Krishnamurthy No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(x=n,s=0;x!=0;x/=10)
        {
            for(f=1,i=1;i<=x%10;i++)
                f*=i;
            s+=f;
        }
        if(s==n)
            printf("%d ",n);
    }
}