//WAP to check Twin prime no.
#include<stdio.h>
int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    int a,b;
    printf("Enter two no. : ");
    scanf("%d%d",&a,&b);
    ((is_prime(a)==1) && (is_prime(b)==1) && (a-b == 2 || b-a == 2))?printf("%d and %d are Twin Prime no.",a,b):printf("%d and %d are not Twin Prime no.",a,b);

}