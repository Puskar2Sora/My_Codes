/*
    1
    1 0
    1 0 1
    1 0 1 0
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
}