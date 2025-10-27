//WAP to print Ugly no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,f,x;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Ugly No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        x=n;
        f=0;
        while(x>1)
        {
            (x%2==0)?x/=2:(x%3==0)?x/=3:(x%5==0)?x/=5:f++;
            if(f!=0)
                break;
        }
        if(f==0)
            printf("%d ",n);
    }
}

