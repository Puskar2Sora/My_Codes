/*
    D D D D
    C C C
    B B
    A
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    char x;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1,x=n+64;i<=n;i++,x--)
    {
        for(j=i;j<=n;j++)
            printf("%c ",x);
        printf("\n");    
    }
}