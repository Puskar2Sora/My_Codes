/*
    
    - - - - *
    - - - * * *
    - - * * * * *
    - * * * * * * *
    * * * * * * * * * 
    - * * * * * * *
    - - * * * * *
    - - - * * *
    - - - - *
    - - - * * *
    - - * * * * * 
*/
#include<stdio.h>
void main()
{
    int i , j , sp, n;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=i;sp<=n;sp++)
            printf("  ");
        for(j=1;j<=2*i-1;j++)
            printf("* ");
        printf("\n");
    }
    for(i=2;i<=n-1;i++)
    {
        for(sp=1;sp<=i;sp++)
            printf("  ");
        for(j=2*n-1;j>=2*i-1;j--)
            printf("* ");
        printf("\n");
    }
    for(i=1;i<=n-2;i++)
    {
        for(sp=i;sp<=n;sp++)
            printf("  ");
        for(j=1;j<=2*i-1;j++)
            printf("* ");
        printf("\n");
    }
}