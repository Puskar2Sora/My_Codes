/*
    5
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}