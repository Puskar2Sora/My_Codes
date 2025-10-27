//WAP to print Unique no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,f,x,y,c;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Unique No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(f=0,x=n,c=0;x!=0;x/=10,c++)
        {
            for(y=x;y!=0;y/=10)
            {
                if(x%10==y%10)
                    f++;
            }
        }
        if(f==c)
            printf("%d ",n);
    }
}

