//WAp to print Harshad no.  from 1 - n
#include<stdio.h>
void main()
{
    int n,r,s,x;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Harshad No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(x=n,s=0;x!=0;x/=10)
            s+=x%10;
        if(n%s==0)
            printf("%d ",n);
    }
}