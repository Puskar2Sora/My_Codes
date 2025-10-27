/*
    A B C D
    A B C
    A B 
    A
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    char x;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1,x='A';i<=n;i++)
    {
        for(j=i;j<=n;j++,x++)
        {
            printf("%c ",x);
        }
        printf("\n");
    }
}