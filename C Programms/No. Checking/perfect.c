//WAP to check Perfect no.
#include<stdio.h>
void main()
{
    int n,s=0,i;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)    
    {
        if(n%i==0)
            s+=i;
    }
    (s==n)?printf("%d is a Perfect no.",n):printf("%d is not a Perfect no.",n);
}