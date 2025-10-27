//WAP to check Autopolymorphic No.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no. = ");
    scanf("%d",&n); 
    if ( (n*n)%10 == n || (n*n)%100 == n)
        printf("%d is a Autopolymorphic no.",n);
    else
        printf("%d is not a Autopolymorphic no.",n);
    return 0;
}