//WAP to print the sum of 1-n no.
#include<stdio.h>

void main()
{
    int i,n,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        s+=i;
        printf("%d + ",i);
    }
    printf("%d = %d",i,s+i);
}