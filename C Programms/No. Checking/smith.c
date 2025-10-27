//WAP to check smith no.
#include<stdio.h>
int sod(int n)
{
    int s=0;
    for(;n!=0;n/=10)
        s+=n%10;
    return s;
}
void main()
{
    int x,n,sof=0,i=2;
    printf("Enter the no. = ");
    scanf("%d",&n);
    x=n;
    while(i<=n)
    {
        if(n%i==0)
        {
            sof+=sod(i);
            n/=i;
        }    
        else
            i++;
    }
    (sod(x)==sof)?printf("%d is a Smith No.",x):printf("%d is not a Smith No.",x);
}