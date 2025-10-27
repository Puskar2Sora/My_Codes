//1/1! 1/3! 1/5!   ... n... nn
#include<stdio.h>
void main()
{
    int n,i,f=1;
    float s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f*=i;
        if(i%2!=0)
        {
            (i!=n)?printf("1/%d + ",f):printf("1/%d ",f);
            s+=1/(float)f;
        }
    }
    printf(" = %.3f",s);
}