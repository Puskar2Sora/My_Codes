/*
    A B C D
    A B C
    A B
    A
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
        for(j=i,x='A';j<=n;j++,x++)
            printf("%c ",x);
        printf("\n");    
    }
}