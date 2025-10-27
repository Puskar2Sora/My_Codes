/*
    D C B A
    D C B
    D C
    D
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
        for(j=i,x=n+64;j<=n;j++,x--)
            printf("%c ",x);
        printf("\n");    
    }
}