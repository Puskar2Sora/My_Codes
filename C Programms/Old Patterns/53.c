/*
    D
    D C
    D C B
    D C B A
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    char x;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1,x=n+64;j<=i;j++,x--)
            printf("%c ",x);
        printf("\n");    
    }
}