//WAP to print Pronic no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,s,x;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Pronic No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(int i=1;i<=n;i++)
        {
            if(i*(i+1)==n)
            {
                printf("%d ",n);
                break;
            }
        }
    }
}