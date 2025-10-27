/*
    = * * * 
    * = * *
    * * = *
    * * * =
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            (i==j)?printf("= "):printf("* ");
        }
        printf("\n");
    }
}