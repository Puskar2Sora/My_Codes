//WAP to print Perfect no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,s,x,i;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Perfect No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(i=1,s=0;i<n;i++)
        {
            if (n%i == 0)
                s+=i;            
        }
        if(s==n)
            printf("%d ",n);
    }
}