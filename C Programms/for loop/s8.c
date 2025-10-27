//x - x + x - x ... n
#include<stdio.h>
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
            s+=x;
            (i==1)?printf("%d ",x):printf("+ %d ",x);
        }
        else 
        {
            s-=x;
            printf("- %d ",x);
        }
    }
    printf("= %d",s);
}