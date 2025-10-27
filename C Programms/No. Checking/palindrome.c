//WAP to check palindrome no.
#include<stdio.h>
void main()
{
    int n,x,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10)
        s=s*10+n%10;
    (s==x)?printf("%d is a palindrome no.",x):printf("%d is not a palindrome no.",x);
}