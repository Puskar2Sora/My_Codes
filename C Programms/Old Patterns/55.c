/*
    D C B A
    C B A
    B A
    A
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i+64;j>=65;j--)
            printf("%c ",j);
        printf("\n");    
    }
}