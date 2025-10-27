/*
    A B C D
    B C D
    C D
    D

*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=65;i<=n+64;i++)
    {
        for(j=i;j<=n+64;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}