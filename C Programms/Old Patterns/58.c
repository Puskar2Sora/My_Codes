/*
    A A A A
    B B B 
    C C
    D
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
        for(j=i;j<=n;j++)
            printf("%c ",x);
        printf("\n");    
    }
}