//WAP to check KrishnaMurthy no.
#include<stdio.h>
void main()
{
    int n,x,i=1,f=1,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10,f=1)
    {
        for(i=1;i<=n%10;i++)
            f*=i;
        s+=f;
    }
    (s==x)?printf("%d is a Krishnamurthy No.",x):printf("%d is not a Krishnamurthy No.",x);
}