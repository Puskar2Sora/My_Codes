/*
    1
    2 2
    3 3 3
    4 4 4 4
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}