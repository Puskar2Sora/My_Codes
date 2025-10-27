/*
    A
    A B
    A B C
    A B C D
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
        for(j=1,x='A';j<=i;j++,x++)
            printf("%c ",x);
        printf("\n");    
    }
}