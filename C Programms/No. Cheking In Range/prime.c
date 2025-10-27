//WAP to print Prime no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,f=0,i;
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
        if(f==0)
            printf("%d ",n);
    }
}