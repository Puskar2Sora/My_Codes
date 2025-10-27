//1 8 27 64 125 ... n
#include<stdio.h>
void main()
{
    int n,i,s=0,c;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        c=i*i*i;
        printf("%d + ",c);
        s+=c;
    }
    printf("%d = %d",i*i*i,s+(i*i*i));
}