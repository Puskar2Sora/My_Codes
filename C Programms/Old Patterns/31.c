/*
    1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
*/
#include<stdio.h>
void main()
{
    int n,i=1,j=1;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
            printf("%d ",j);
        for(j=i-1;j>=1;j--)
            printf("%d ",j);
        printf("\n");
    }
}