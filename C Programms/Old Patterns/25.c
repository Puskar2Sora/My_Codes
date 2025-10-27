/*
    0
    1 1
    0 0 0
    1 1 1 1
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j>=0;j--)
        {
            printf("%d ",i%2);
        }
        printf("\n");
    }
}