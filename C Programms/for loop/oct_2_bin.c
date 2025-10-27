//WAP to convert Octal to Binary
#include<stdio.h>
void main()
{
    int n,x,s=0,i=1,b=0,j=1,r;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10,s=0,j*=1000)
    {    
        for(i=1,r=n%10;r!=0;r/=2,i*=10)
            s+=i*(r%2);
        b+=s*j;
    }
    printf("Binary of %d is %d",x,b);
}