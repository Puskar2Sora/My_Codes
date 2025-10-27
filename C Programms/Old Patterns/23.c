/*
    * * * *
    _ * * *
    _ _ * *
    _ _ _ *
*/
#include<stdio.h>
void main()
{
    int n,i,j,sp;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<i;sp++)
            printf(" ");
        for(j=i;j<=n;j++)
            printf("* ");
        printf("\n");
    }
}