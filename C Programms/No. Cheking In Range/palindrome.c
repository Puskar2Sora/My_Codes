//WAP to print Palindrome no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,s,x;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Palindrome No. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(x=n,s=0;x!=0;x/=10)
            s=s*10+x%10;
        if (s==n)
            printf("%d ",n);
    }
}