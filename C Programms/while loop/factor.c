//WAp to check the factors of a no.
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter thw no. = ");
    scanf("%d",&n);
    printf("Factros of %d : ",n);
    while(i<=n)
    {
        if(n%i==0)
            printf("%d ",i);
        i++;
    }
}