//Fibonacci Series 0 1 1 2 3 5 8 ... n
#include<stdio.h>
void main()
{
    int n,i,s=0,a=0,b=1;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++)
    {
        s=a+b;
        a=b;
        b=s;
        printf("%d ",s);
    }
}