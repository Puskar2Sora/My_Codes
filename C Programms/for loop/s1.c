//1 4 9 16 25   ... n
#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("%d + ",i*i);
        s+=i*i;
    }
    printf("%d = %d",i*i,s+(i*i));
}