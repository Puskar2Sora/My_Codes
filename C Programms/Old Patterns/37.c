/*
    1
    1 1
    1 1 2 
    1 1 2 3
    1 1 2 3 5
*/
#include<stdio.h>
void main()
{
    int n,i,j,a,s,b;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1,a=1,b=0;j<=i;j++,s=a+b,b=a,a=s)
            printf("%d ",a);
        printf("\n");
    }
}