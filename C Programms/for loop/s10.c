//x^2 - x^5 + x^8 -  ... n
#include<stdio.h>
int power(int x,int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f*=x;
    return f;
}

void main()
{
    int n,x,i,j,s=0,p;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("Enter the no. = ");
    scanf("%d",&x);
    for(i=1,j=2;i<=n;i++,j+=3)
    {
        p=power(x,j);
        if (i==1 || i%2!=0)
        {
            s+=p;
            (i==1)?printf("%d ",p):printf("+ %d ",p);
        }
        else
        {
            s-=p;
            printf("- %d ",p);
        }
    }
    printf("= %d",s);
}