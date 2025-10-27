/*
    * * * * * * * * * * * * * * * * *
    - * * * * * * * - * * * * * * *
    - - * * * * * - - - * * * * *
    - - - * * * - - - - - * * *

    - - - - * * * * * * * * * 
    - - - - - * * * * * * *
    - - - - - - * * * * *
    - - - - - - - * * *
    - - - - - - - - *
*/
#include<stdio.h>
void main()
{
    int i,j,sp,n;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        for(sp=1;sp<i;sp++)
            printf("  ");
        for(j=2*n-1;j>=2*i-1;j--)
            printf("* ");
        for(sp=1;sp<=2*i-3;sp++)
            printf("  ");
        for(j=2*n-1;j>=2*i-1;j--)
        {
            if(i!=1 || j!=2*n-1)
                printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=i-2+n;sp++)
            printf("  ");
        for(j=2*n-1;j>=2*i-1;j--)
            printf("* ");
        printf("\n");
    }
}