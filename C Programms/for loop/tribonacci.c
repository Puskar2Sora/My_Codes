//Fibonacci Series 0 1 1 2 3 5 8 ... n
#include<stdio.h>
void main()
{
    int n,i,s=0,a=1,b=1,c=1;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("%d %d %d ",a,b,c);
    for(i=1;i<=n-3;i++)
    {
        s=a+b+c;
        a=b;
        b=c;
        c=s;
        printf("%d ",s);
    }
}