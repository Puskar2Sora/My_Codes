/*
    * * * * * * * * * * * * * * * * * * * * * * *
    - * - - - - - * - * - - - - - * - - - - - * 
    - - * - - - * - - - * - - - * - * - - - *
    - - - * - * - - - - - * - * - - - * - * 
    - - - - * - - - - - - - * - - - - - *
    - - - * - * - - - - - * - * - - - * - *
    - - * - - - * - - - * - - - * - * - - - *
    - * - - - - - * - * - - - - - * - - - - - * 
    * * * * * * * * *  * * * * * * * * * * * * * *
*/
#include <stdio.h>
void main()
{
    int i,j,n,sp;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<i;sp++)
            printf("  ");
        for(j=2*i-1;j<=2*n-1;j++)
           (i==1)?printf("* "):(j==2*i-1 || j==2*n-1)?printf("* "):printf("  ");
        for(sp=1;sp<=2*i-3;sp++)
            printf("  ");
        for(j=2*i-1;j<=2*n-1;j++)
        {
            if(i!=1 || j!=2*i-1)
                (i==1)?printf("* "):(j==2*i-1 || j==2*n-1)?printf("* "):printf("  ");
        }
        for(sp=1;sp<=2*i-3;sp++)
            printf("  ");
        for(j=2*i-1;j<=2*n-1;j++)
        {
            if(i!=1 || j!=2*i-1)
                (i==1)?printf("* "):(j==2*i-1 || j==2*n-1)?printf("* "):printf("  ");
        }
        printf("\n");
    }

    for(i=2;i<=n;i++)
    {
        for(sp=i;sp<n;sp++)
            printf("  ");
        for(j=1;j<=2*i-1;j++)
           (i==n)?printf("* "):(j==2*i-1 || j==1)?printf("* "):printf("  ");
        for(sp=2*n-3;sp>=2*i-1;sp--)
            printf("  ");
        for(j=1;j<=2*i-1;j++)
        {
            if(i!=n || j!=2*i-1)
                (i==n)?printf("* "):(j==2*i-1 || j==1)?printf("* "):printf("  ");
        }
        for(sp=2*n-3;sp>=2*i-1;sp--)
            printf("  ");
        for(j=1;j<=2*i-1;j++)
        {
            if(i!=n || j!=2*i-1)
                (i==n)?printf("* "):(j==2*i-1 || j==1)?printf("* "):printf("  ");
        }
        printf("\n");
    }
}
