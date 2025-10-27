/*
    4 3 2 1
    4 3 2
    4 3
    4
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}