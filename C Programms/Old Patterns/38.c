/*
    1
    2 6
    3 7 10
    4 8 11 13
    5 9 12 14 15
*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);

        }
        printf("\n");
    }
}