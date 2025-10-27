//1/1! 1/3! 1/5!   ... n... nn
#include<stdio.h>
void main()
{
    int n,i=1,f=1;
    float s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        if(i%2!=0)
        {
            printf("1/%d   ",f);
            s+=1/(float)f;
        }
        i++;
    }
    printf(" = %.3f",s);
}