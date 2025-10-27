/*
    1 2 3 4 4 3 2 1
    1 2 3 - - 3 2 1
    1 2 - - - - 2 1
    1 - - - - - - 1
*/
#include<stdio.h>
void main()
{
    int n,i,j,sp;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        for(sp=i;sp<n;sp++)
            printf("    ");
        for(j=i;j>=1;j--)
            printf("%d ",j);
        printf("\n");
    }
}