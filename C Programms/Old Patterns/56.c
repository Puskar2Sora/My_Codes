/*
    D
    C C
    B B B
    A A A A
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
        for(j=1;j<=i;j++)
            printf("%c ",x);
        printf("\n");    
    }
}