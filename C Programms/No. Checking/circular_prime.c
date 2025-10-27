//WAP to check Circular Prime no.
#include<stdio.h>
int is_prime(int n)
{
    for (int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int rotate(int n)//197
{
    int x,p=1;
    for(x=n;n!=0;n/=10)
        p=p*10;                  
    return (x%(p/10))*10+x/(p/10);
}
void main()
{
    int n,x,i,f=0,c=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10)
        c++;
    for(i=1,n=x;i<=c;i++)
    {
        if (is_prime(n)!=1)
        {
            f=1;
            break;
        }
        n=rotate(n);
    }
    (f==0)?printf("%d is a Circular Prime no.",x):printf("%d is not a Circular Prime no. ",x);
}