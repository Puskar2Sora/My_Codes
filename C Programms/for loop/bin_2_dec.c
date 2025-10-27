//WAP to convert Binary to Decimal
#include<stdio.h>
void main()
{
    int n,i=1,x,s=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10,i*=2)
        s+=(n%10)*i;
    printf("Binary of %d is %d",x,s);
}