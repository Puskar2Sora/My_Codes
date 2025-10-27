/*
    - - - *
    - - * * *
    - * * * * *
    * * * * * * *

    * - - - - - *
    * * - - - * *
    * * * - * * * 
    * * * * * * *

    * * * - * * *
    * * - - - * *
    * - - - - - *

    * * * * * * *
    - * * * * *
    - - * * *
    - - - *
*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
            printf("  ");
        for(j=1;j<=2*i-1;j++)
            printf("* ");
        printf("\n");
    } 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("* ");
        for(j=2*n-3;j>=2*i-1;j--)
            printf("  ");
        for(j=1;j<=i;j++)
        {
            if(i!=n || j!=i)
                printf("* ");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf("* ");
        for(j=1;j<=2*i-3;j++)
            printf("  ");
        for(j=i;j<=n;j++)
            printf("* ");
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf("  ");
        for(j=2*n-1;j>=2*i-1;j--)
            printf("* ");
        printf("\n");
    }
}