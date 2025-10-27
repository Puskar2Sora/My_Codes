//WAP to print fibonacci series 0 1 1 2 3 5 8 ... n
#include<stdio.h>
void main()
{
    int n,a=0,b=1,i=1,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    while(i<=n-2)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
        i++;
    }	
}

