/*
    * * * * * * * * * *
    * * * * - - * * * *
    * * * - - - - * * *
    * * - - - - - - * *
    * - - - - - - - - *
    * * - - - - - - * *
    * * * - - - - * * *
    * * * * - - * * * *
    * * * * * * * * * *  
*/

#include<stdio.h>
void main()
{
    int i,j,sp,n;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            printf("*");
        for(sp=i-1;sp>=1;sp--)
            printf("  ");
        for(j=n;j>=i;j--)
            printf("*");
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(sp=n-1;sp>i-1;sp--)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}