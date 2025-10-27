//WAP to check Disarium No.
#include<stdio.h>
void main()
{
    int n,p,i,s,c,x,r;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Disarium no. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(x=n,c=0;x>0;x/=10)
            c++;
        for(x=n,s=0;x!=0;x/=10,c--)
        {
            for(i=1,p=1;i<=c;i++)
                p*=x%10;
            s+=p;
        }
        if(s==n)
            printf("%d ",n);
    }
}