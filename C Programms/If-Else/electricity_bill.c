//WAP to calc. the electricity bill..

#include<stdio.h>

void main()
{
    int x;
    float n,s=0;
    printf("Enter the no. of units : ");
    scanf("%d",&x);
    n=x;
    while(n!=0)
    {
        if (n>800)
        {
            n-=800;
            s+=n*7.5;
            n=800;
        }
        else if (n>400 && n<=800)
        {
            n-=400;
            s+=n*5.5;
            n=400;
        }
        else if (n>200 && n<=400)
        {
            n-=200;
            s+=n*3.5;
            n=200;
        }
        else if (n>100 && n<=200)
        {
            n-=100;
            s+=n*2.5;
            n=100;
        }
        else
        {
            s+=n*1.5;
            n=0;
        }
    }
    printf("Electricity bill for %d units = Rs. %.2f /-",x,s);
}