//2 5 8 11 14   ... n
#include<stdio.h>
void main()
{
    int n,i,s=0,x;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1,x=2;i<n;i++,x+=3)
    {
        printf("%d + ",x);
        s+=x;
    }
    printf("%d = %d",x,s+x);
}