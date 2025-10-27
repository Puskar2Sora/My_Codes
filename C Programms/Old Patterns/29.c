/*
    1
    1 2 3
    1 2 3 4 5
    1 2 3 4 5 6 7
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}