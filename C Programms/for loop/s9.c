//x - x^2 + x^3 ... n
#include<stdio.h>
int power(int x,int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f*=x;
    }
    return f;
}

void main()
{
    int n,x,i,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("Enter the no. = ");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i%2!=0)
        {
            s+=power(x,i);
            (i==1)?printf("%d ",x):printf("+ %d ",power(x,i));
        }
        else
        {
            s-=power(x,i);
            printf("- %d ",power(x,i));
        }
    }
    printf("= %d",s);
}