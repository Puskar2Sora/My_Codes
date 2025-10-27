//WAP to print Dudeney no. in 1-n
#include<stdio.h>
void main()
{
    int n,r,s,c;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Dudeney No. in range of 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(c=n*n*n,s=0;c!=0;c/=10)
            s+=c%10;
        if(s==n)
            printf("%d ",n);
    }
}