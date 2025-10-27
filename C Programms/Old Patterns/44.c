/*
    1
    2 1     2
    3 2 1   2 3
    4 3 2 1 2 3 4
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}