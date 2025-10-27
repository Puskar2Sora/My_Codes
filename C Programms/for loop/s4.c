//4 8 16 32 64  ... n
#include<stdio.h>
void main()
{
    int n,i,s=0,x;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1,x=4;i<n;i++,x*=2)
    {
        printf("%d + ",x);
        s+=x;
    }
    printf("%d = %d",x,s+x);
}