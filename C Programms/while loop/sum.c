//WAP to print 1-n no. and sum
#include<stdio.h>
void main()
{
    int n,i=1,s=0;
    printf("Enter the range = ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        s+=i++;
    }	
    printf(" = %d",s);
}
