//WAP to print Duck No. in range of 1-n
#include<stdio.h>
void main()
{
    int r,n,f=0;
    printf("Enter the range : ");
    scanf("%d",&r);
    for(n=1;n<=r;n++,f=0)
    {
        for(int x=n;x!=0;x/=10)
        {
            if (x%10==0)
            {
                f=1;
                break;
            }    
        }
        if(f==1)
            printf("%d ",n);
    }
}