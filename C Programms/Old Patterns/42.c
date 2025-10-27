/*
    1
    2 3      2
    4 5 6    5 4
    7 8 9 10 9 8 7
*/
#include<stdio.h>
void main()
{
    int n,i,j,k=1,l;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%d ",k);
        }
        for(l=k-2;l>=k-i;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}