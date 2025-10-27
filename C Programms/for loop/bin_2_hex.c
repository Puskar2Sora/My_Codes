//WAP to convert Binary to Octal
#include<stdio.h>
void main()
{
    int n,x,i=1,s=0,r,j=1;
    char o;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10000,s=0,j*=10)
    {
        r=n%10000;
        for(i=1;r!=0;r/=10,i*=2)
            s+=(r%10)*i;
        o+=((s==10)?'A':(s==11)?'B':(s==12)?'C':(s==13)?'D':(s==14)?'E':'F');
    }
    printf("Octal of %d is %c",x,o);

}