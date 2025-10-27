//1 11 111 1111 ... n
#include<stdio.h>
void main()
{
    int n,i,s=0,x=1;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("%d + ",x);
        s+=x;
        x=x*10+1;
    }
    printf("%d = %d",x,s+x);
}