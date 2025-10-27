//WAP to check Abundant No.
#include<stdio.h>
void main()
{
    int n,i,s=0,r;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Abundant no. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++,s=0)
    {
        for (i=1;i<n;i++)
        {
            if(n%i==0)
                s+=i;
        }
        if (s>n)
            printf("%d ",n);
    }
}