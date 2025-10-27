//WAP to print Hardy Ramanujan no. for 1-n
#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,i,j,f;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Hardy Ramanujan No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for (i=1,f=0; i <= cbrt(n); i++)
        {
            for(j=i+1;j<=cbrt(n);j++)
            {
                if ((i*i*i+j*j*j)==n)
                    f+=1;
            }
        }
        if(f==2)
            printf("%d ",n);
    }
}