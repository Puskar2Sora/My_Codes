//WAP to convert Binary to Octal
#include<stdio.h>
void main()
{
    int n,x,i=1,s=0,r,o=0,j=1;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=1000,s=0,j*=10)
    {
        r=n%1000;
        for(i=1;r!=0;r/=10,i*=2)
            s+=(r%10)*i;
        o+=s*j;
    }
    printf("Octal of %d is %d",x,o);

}