//WAP TO CHECK DUDENEY NO.
#include <stdio.h>
void main()
{
    int n,x,s=0;
    printf("Enter the no. : ");
    scanf("%d",&x);
    for(n=x*x*x;n!=0;n/=10)
        s+=n%10;
    (x==s)?printf("%d is a Dudeney No.",x):printf("%d is not a Dudeney No.",x);
}