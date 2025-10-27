//WAP to print Neon no. in 1-n
#include<stdio.h>
void main()
{
    int n,r,s,sq;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Neon No. in range of 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(sq=n*n,s=0;sq!=0;sq/=10)
            s+=sq%10;
        if(s==n)
            printf("%d ",n);
    }
}