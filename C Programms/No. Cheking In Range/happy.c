//WAp to print happy no. from 1-n
#include<stdio.h>
void main()
{
    int n,r,s,x;
    printf("Enter the range : ");
    scanf("%d",&r);
    printf("Happy No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(x=n;;x=s)
        {
            for(s=0;x!=0;x/=10)
               s+=(x%10)*(x%10); 
            if(s<10)
            {
                if(s==1)
                    printf("%d ",n);
                break;
            }
        }
    }
}