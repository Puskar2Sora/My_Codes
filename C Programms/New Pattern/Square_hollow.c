/*
    * * * * * * *
    * - - - - - *
    * - - - - - *
    * - - - - - *
    * - - - - - *
    * - - - - - *
    * * * * * * * 
*/

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            (i==1 || i==n)?printf("* "):(j==1 || j==n)?printf("* "):printf("  ");
        }
        printf("\n");
    }
}