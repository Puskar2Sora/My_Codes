//WAP to print 1 8 27 64 .... n
#include<stdio.h>
void main()
{
    int n,i=1,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i*i);
        s+=i*i*(i++);
    }	
    printf(" = %d",s);
}

