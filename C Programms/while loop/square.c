//WAP to print 1 4 9 16 25  .... n
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter the range = ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
    printf(" = %d",(n*(n+1)*(2*n+1))/6);
}

