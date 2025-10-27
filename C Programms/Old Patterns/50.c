/*
    A B C D
    E F G H
    I J K L
    M N O P
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    char x='A';
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++,x++)
        {
            printf("%c ",x);
        }
        printf("\n");
    }
}