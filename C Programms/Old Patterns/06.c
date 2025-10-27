/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}