//WAP to print fibonacci series 1 1 1 3 5 9 17 ... n
#include<stdio.h>
void main()
{
    int n,a=1,b=1,c=1,i=1,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("%d %d %d ",a,b,c);
    while(i<=n-3)
    {
        s=a+b+c;
        printf("%d ",s);
        a=b;
        b=c;
        c=s;
        i++;
    }	
}

