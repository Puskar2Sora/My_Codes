/*
    *
    - * *
    - - * * *
    - - - * * * *

    - - * * *
    - * *
    *
*/
#include<stdio.h>
void main()
{
    int i,j,sp,n;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<i;sp++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(sp=i-1;sp>1;sp--)
            printf("  ");
        for(j=i-1;j>=1;j--)
            printf("* ");
        printf("\n");
    }
}
