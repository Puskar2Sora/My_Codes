//WAP to check twisted Prime no.
#include <stdio.h>
int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
          return 0;
    }
    return 1;
}
void main()
{
    int x,n,s=0;
    printf("Enter the no. : ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10)
        s=s*10+n%10;
    (is_prime(x)== is_prime(s))?printf("%d is a Twisted prime no.",x):printf("%d is not a Twisted prime no.",x);  
}