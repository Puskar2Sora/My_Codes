//1/1! 2/2! 3/3!   ... nn
#include<stdio.h>
void main()
{
    int n,i,f=1;
    float s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        f*=i;
        printf("%d/%d + ",i,f);
        s+=(float)i/(float)f;
    }
    printf("%d/%d = %.2f",i,f*i,s+((float)i/(float)(f*i)));
}