/*
    A
    B B
    C C C
    D D D D
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    char x;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1,x='A';i<=n;i++,x++)
    {
        for(j=1;j<=i;j++)
            printf("%c ",x);
        printf("\n");    
    }
}