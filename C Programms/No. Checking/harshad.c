//WAP to check harshad no./ Niven No.
#include<stdio.h>
void main()
{
    int n,x,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10)
        s+=n%10;
    (x%s==0)?printf("%d is a Harshad no.",x):printf("%d is not a Harshad no.",x);
}