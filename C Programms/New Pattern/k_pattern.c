/*
    * * * * * 
    * * * *
    * * *
    * * 
    * 
    * *
    * * *
    * * * *
    * * * * * 
*/

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf("* ");
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}